#include <bits/stdc++.h>
using namespace std;

// note map automatically prints in ascending order of key 

class Node{
    public:
        int data;
        Node*left;
        Node*right;

        Node(int data){
            this->data = data;
            left=right=NULL;
        }

};

// Tree building

static int idx= -1;

Node* buildTree(vector<int>nodes){              // it build tree and this takes nodes vectore as input  and return the address of root node as return type is Node*
    
    idx++;                           //as it is static so it will ++ wherever we go
    
    if(nodes[idx] == -1)  return  NULL;

     Node* currNode= new Node(nodes[idx]);    
    currNode->left = buildTree(nodes);               // current ke left sai  point krwado ,  note joining  strts with  returning null
    currNode->right= buildTree(nodes);

    return  currNode;

}


void topView(Node*root){
    queue<pair<Node*,int>>Q;  // (node,HD)                  //hd is horizontal distance
    map<int,int>m;      //(HD,node->data)

    Q.push(make_pair(root,0));
    while(!Q.empty()){
        pair<Node*,int>curr=Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int currHD=curr.second;

        if(m.count(currHD)==0){
            m[currHD]= currNode->data;
        }

        if(currNode->left != NULL){
            pair<Node*,int>left=make_pair(currNode->left,currHD-1);
            Q.push(left);
        }

        if(currNode->right != NULL){
            pair<Node*,int>right=make_pair(currNode->right,currHD+1);
            Q.push(right);
        }

    }

    for(auto it:m){
        cout<<it.second<<" ";
    }


}


int main() {

    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node*root = buildTree(nodes);                            // O(n)

topView(root);
    return 0;
}


 