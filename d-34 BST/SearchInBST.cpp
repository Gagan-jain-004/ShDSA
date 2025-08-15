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

// searching in bst 

bool search(Node* root,int key){
    if(root == NULL) {
        return false;
    }

    if(root->data == key) return true;

    if(root->data >key){
       return  search(root->left,key);
    }

    if(root->data <key){
       return  search(root->right,key);
    }

}

int main() {

int arr[6] = {5,1,3,4,2,7};

Node* root =  buildBST(arr,6);

// inorder(root);

cout<<search(root,15)<<endl;

    return 0;
}