#include <bits/stdc++.h>
using namespace std;

class SegmentTree{

    vector<int>tree;    
    int n;

      void buildTree(vector<int>&arr,int start,int end,int node){

            if(start == end) {
                tree[node] = arr[start];
                return;
            }

            int mid = start + (end-start)/2;

            buildTree(arr,start,mid,2*node+1);  //left
            buildTree(arr,mid+1,end,2*node+2);  // right

            tree[node] = tree[2*node+1] + tree[2*node +2];

        }

        int rangeSum(int qi,int qj, int si,int sj , int node){
            if(qj<si  || qi >sj){  // no overlap
                return 0;
            }

            if(si>= qi && sj<=qj){    // complete overlap
                return tree[node];
            }

            //partial overlap
            int mid = si + (sj-si)/2;

            return rangeSum(qi,qj,si,mid,2*node +1) + rangeSum(qi,qj,mid+1,sj,2*node+2);


        }

    public:
        SegmentTree(vector<int>&arr){
            n=  arr.size();
            tree.resize(4*n);
            buildTree(arr,0,n-1,0);
        }

      
        void printTree(){
            for (int i = 0; i < tree.size(); i++)
            {
            cout<<tree[i]<< " ";     
            }
            
        }

        int rangeQuery(int qi,int qj){
           return rangeSum(qi,qj,0,n-1,0);
        }
};

int main() {

    vector<int>arr ={1,2,3,4,5,6,7,8};

    SegmentTree st(arr);

    cout<<st.rangeQuery(2,5)<<endl;    //18
    return 0;
}