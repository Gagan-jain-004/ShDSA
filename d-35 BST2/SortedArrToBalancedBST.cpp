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


Node* BalancedBSTfromSorted(int arr[],int st,int end){
    if(st>end) return NULL;
    
    int mid= st + (end-st)/2;
    Node*curr = new Node(arr[mid]);

    curr->left=BalancedBSTfromSorted(arr,st,mid-1);
    curr->right=BalancedBSTfromSorted(arr,st,mid-1);

    return curr;
}

void preorder(Node*root){
    if(root== NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main() {

int arr[7] = {3,4,5,6,7,8,9};

Node*root = BalancedBSTfromSorted(arr,0,6);

// for checking above bst is balanced or not  find its preorder  

preorder(root);
    return 0;
}