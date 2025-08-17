// APPROACH - store the inorder seq of bst in vector then use previous qsn (sorted array to balanced bst )

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *BalancedBSTfromSortedVector(vector<int> arr, int st, int end)
{
    if (st > end)
        return NULL;

    int mid = st + (end - st) / 2;
    Node *curr = new Node(arr[mid]);

    curr->left = BalancedBSTfromSortedVector(arr, st, mid - 1);
    curr->right = BalancedBSTfromSortedVector(arr, st, mid - 1);

    return curr;
}

void getInorder(Node *root, vector<int> &nodes)
{
    if (root == NULL)
        return;

    getInorder(root->left, nodes);
    nodes.push_back(root->data);
    getInorder(root->right, nodes);
}

Node *balanceBst(Node *root)
{
    // get inorder  seq
    vector<int> nodes;
    getInorder(root, nodes);

    return BalancedBSTfromSortedVector(nodes, 0, nodes.size() - 1);
}

void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);

    root = balanceBst(root);

    // for crosscheck find preorder 

    preorder(root);

    return 0;
}