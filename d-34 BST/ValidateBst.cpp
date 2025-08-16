#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
       int data;
       Node*left;
       Node*right;

       Node(int data){
            this->data  = data;
            left= right= NULL;
       }

};

Node* insert(Node*root,int val){
     if(root == NULL){
        root = new Node(val);
        return root;
     }

     if(val<root->data){    //left subtree
        root->left= insert(root->left,val);
     }else{  //right subtree
        root->right= insert(root->right,val);
     }

     return root;
}

Node* buildBST(int arr[],int n){

    Node* root = NULL;

    for(int i=0;i<n;i++){
        root= insert(root,arr[i]);
    }

    return root;
}


// to check whether bst form or not just print its inorder (which should be in sorted order to prove to be a bst)

void inorder(Node*root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


// validate bst 

bool validateHelper(Node*root,Node*min,Node*max){
    if(root==NULL)  return true;

    if(min!=NULL && root->data <min->data){
        return false;
    }

    if(min!=NULL && root->data  >max->data){
        return false;
    }
       return validateHelper(root->left,min,root)
        && validateHelper(root->right, root,max);
}

bool validateBST(Node*root){
    return validateHelper(root,NULL,NULL);
}

int main() {

int arr[9] = {8,5,3,1,4,6,10,11,14};


Node* root =  buildBST(arr,9);
 
cout<<validateBST(root);

    return 0;
}