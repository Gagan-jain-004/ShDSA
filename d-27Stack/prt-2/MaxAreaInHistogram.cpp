// see again its not commplete 

#include<bits/stdc++.h>
using namespace std;

int maxAreaHistogram(vector<int>height){
    vector<int>nsl;
    vector<int>nsr;
    stack<int>s;

    //next smaller left
    for(int i=0;i<height.size();i++){
        int curr = height[i];
        while(!s.empty()&& curr<= height[s.top()]){
            s.pop();
        }

        if(s.empty()){
            nsl[i]=-1;
        }else{
            nsl[i]=s.top();
        }
        s.push(curr);
    }

    while(!s.empty()){
        s.pop();
    }
    //next smaller right

    int n= height.size();
    s.push(n-1);
    nsr[n-1] =n;
    for(int i=n-2;i>=0;i--){
        int curr = height[i];
        while(!s.empty() && curr<= height[s.top()]){
            s.pop();
        }

        if(s.empty()){
            nsr[i]=n;
        }else{
            nsr[i]=s.top();
        }
    }

}

int main(){

    vector<int>height ={2,1,5,6,2,3};

    return 0;
}