//not completed

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        string key;
        int val;
        Node*next;

        Node(string key,int val){
            this->key= key;
            this->val= val;
            next= NULL;
        }
};

class HashTable{
    int totSize;
    int currSize;
    Node** table;

    public:
        HashTable(int  size){
            totSize= size;
            currSize=0;
        }
};

int main() {



    return 0;
}