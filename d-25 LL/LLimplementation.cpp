#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

        Node(int val){
            data= val;
            next= NULL;
        }

        ~Node(){
            if(next !=NULL){
                delete next;       // so on looking it looks for the end then when get null it strts deleteing from lst 
                next =NULL;
            }
        }

};

class List{
    Node* head;
    Node* tail;
    public:
         List(){
            head = NULL;
            tail=NULL;
         }
         ~List(){
            if(head != NULL){
                delete head;      // it will got to node destructor to delete head 
                head =NULL;
            }
         }
         void push_front(int val){
            Node * newNode = new Node(val);

            if(head == NULL) {
                head = tail = newNode;
            }
            else{
                newNode->next =head; 
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next= newNode;
                tail = newNode;
            }
        }

        void printlist(){
            Node * temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
            temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }


        void insert(int val,int pos){
            Node*newNode = new Node(val);
            Node*temp= head;
            int i=1;
            while(i<pos){
                temp=temp->next;
                i++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void pop_front(){
            if(head ==NULL){
                cout<<"LL is empty "<<endl;
                return;
            }

            Node*temp=head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        void pop_back(){

            Node*temp=head;
            while(temp->next->next !=NULL){
                temp= temp->next;
            }
            temp->next =NULL;
            delete tail;
            tail = temp;
        }

        int searchItr(int key){
            Node* temp = head;
            int idx=0;

            while(temp != NULL){
                if(temp->data == key){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            return -1;
        }

        int helper(Node*temp,int key){
            if(temp==NULL) return -1;

            if(temp->data == key){
                return 0;
            }
            int idx = helper(temp->next,key);
            if(idx==-1){
                return -1;
            }
         return idx+1;   
        }

        int searchRec(int key){
            return helper(head,key);
        }

        void reverse(){
            Node*curr = head;
            Node*prev= NULL;
            tail = head;
            while(curr!=NULL){
                Node* next = curr->next;
                curr->next;

                //updations for next itr
                prev = curr;
                curr= next;
            }

            head = prev;
        }
};

int main(){

    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    
    l1.push_back(4);
    l1.push_back(5);
    l1.printlist();
    
    l1.insert(100,2);
    l1.printlist();
    cout<<l1.searchItr(43)<<endl;
    
    
    l1.reverse();
    l1.printlist();
    

    return 0;
}