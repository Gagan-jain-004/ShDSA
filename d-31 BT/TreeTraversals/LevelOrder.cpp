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

// Tree building

static int idx = -1;

Node *buildTree(vector<int> nodes)
{ // it build tree and this takes nodes vectore as input  and return the address of root node as return type is Node*

    idx++; // as it is static so it will ++ wherever we go

    if (nodes[idx] == -1)
        return NULL;

    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes); // current ke left sai  point krwado ,  note joining  strts with  returning null
    currNode->right = buildTree(nodes);

    return currNode;
}

void levelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    cout << endl;
}

// alter way of printing level order

void alterlevelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            cout << endl;
            if (q.empty())
                break;
            q.push(NULL); // to track next line
        }
        else
        {

            cout << curr->data << " ";

            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    cout << endl;
}

int main()
{

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node *root = buildTree(nodes); // O(n)

    // level order traversal

    cout << "level order traversal: ";
    levelOrder(root);
    cout << endl
         << "alter way of printing it " << endl;

    alterlevelOrder(root);

    return 0;
}
