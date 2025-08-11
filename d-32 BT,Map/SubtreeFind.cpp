#include <bits/stdc++.h>
using namespace std;


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

bool isIdentical(Node*root1,Node*root2){

      if(root1==NULL && root2 ==NULL){
        return true;
    }else if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }

    return isIdentical(root1->left,root2->left)&& 
            isIdentical(root1->right,root2->right);
}

bool isSubtree(Node*root,Node*subroot){

    if(root==NULL && subroot ==NULL){
        return true;
    }else if(root==NULL || subroot==NULL){
        return false;
    }

    if(root->data == subroot->data){
        //u reach here if roots of both get matched now go for matching further child nodes
        if(isIdentical(root,subroot)){
            return true;
       }

    }

    int  isLeftSubtree=isSubtree(root->left,subroot);

    if(!isLeftSubtree){
        return isSubtree(root->right,subroot);
    }

    return true;

}


int main() {

    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node*root = buildTree(nodes);                            // O(n)

    Node*subroot = new Node(2);
     subroot->left = new Node(2);
    subroot->right = new Node(2);

    cout<<isSubtree(root,subroot)<<endl;

    return 0;
}


 