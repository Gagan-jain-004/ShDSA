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

void printPath(vector<int>path){
    cout<<"path : ";
    for(auto i:path){
        cout<<i<<" ";
    }
    cout<<endl;
}

void pathHelper(Node*root,vector<int>&path){

    if(root==NULL) return;

    path.push_back(root->data);

    if(root->left ==NULL && root->right == NULL){
        printPath(path);
        path.pop_back();
        return;
    }

    pathHelper(root->left,path);
    pathHelper(root->right,path);

    path.pop_back();

}

void path(Node* root){
        vector<int>path;
        pathHelper(root,path);

}

int main() {
int arr[9] = {8,5,3,1,4,6,10,11,14};
 

Node* root =  buildBST(arr,9);

 path(root);

    return 0;
}