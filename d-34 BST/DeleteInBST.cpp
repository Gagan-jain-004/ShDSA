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

Node*getInorderSuccessor(Node*root){
    while(root->left!=NULL){
        root = root->left;
    }

    return root;
}

Node* delNode(Node*root,int val){

    if(root == NULL)   return NULL;

    if(val<root->data)  root->left = delNode(root->left,val);
   else if(val >root->data) root->right= delNode(root->right,val);
   
   else{    //root == val
            //case1: 0 children  (means jo node delete krni woh leaf node hai )
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }

            //case2: 1 child     (means jo node delete krni uske pass 1 child node hai either in right or left  )
        if(root->left == NULL || root->right ==NULL) {
            return root->left == NULL ? root->right : root->left;
        }

        //case3: 2 children  (if above doesnt return below one will execute)
        Node*IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right=delNode(root->right,IS->data);
        return root;
        

    }
    

return root;      // just for c++ , program flow wont reach here 

}


int main() {

int arr[9] = {8,5,3,1,4,6,10,11,14};

Node* root =  buildBST(arr,6);

inorder(root);
cout<<endl;

  // for case 1 (lef)
  delNode(root,4);
  inorder(root);
  cout<<endl;

  // for case2 (having 1 child)
  delNode(root,10);
  inorder(root);
  cout<<endl;
  // for case3 (having 2 child)

 delNode(root,5);
  inorder(root);
  cout<<endl;

    return 0;
}