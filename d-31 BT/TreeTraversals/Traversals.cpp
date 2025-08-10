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



// Preorder Traversal

void preorder(Node*root){

    if(root == NULL) return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal

void inOrder(Node*root){

    if(root == NULL) return;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
// Postorder Traversal

void postOrder(Node*root){

    if(root == NULL) return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node*root){
    if(root==NULL) return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
       Node* curr = q.front();
       q.pop();
       cout<<curr->data<<" ";

       if(curr->left!=NULL)  q.push(curr->left);
       if(curr->right!=NULL)  q.push(curr->right);

    }
cout<<endl;

}

int main() {

    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node*root = buildTree(nodes);                            // O(n)

    // cout<<"root = "<<root->data<<endl;

    //PreOrder tree traversal                                O(n)
       cout<<"preorder: ";
        preorder(root);
        cout<<endl;
        

    // Inorder tree traversal
    cout<<"inorder: ";
 inOrder(root);
        cout<<endl;

    // Postorder tree traversal
    cout<<"postorder: ";
 postOrder(root);
        cout<<endl;

    // level order traversal 

    cout<<"level order traversal: ";
    levelOrder(root);

    return 0;
}


 