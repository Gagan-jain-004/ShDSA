// approach -  slow ko move by 1 step and fast move by 2 step , then at some point they will get intersect if cycle exists

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next; // so on looking it looks for the end then when get null it strts deleteing from lst
            next = NULL;
        }
    }
};

class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    ~List()
    {
        if (head != NULL)
        {
            delete head; // it will got to node destructor to delete head
            head = NULL;
        }
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printlist()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty " << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {

        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
};

bool isCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            cout << "cycle exists\n";
            return true;
        }
    }
    cout << "cycle doesn't exist" << endl;
    return false;
}

void removeCycle(Node *head)
{
    // detect cycle
    Node *slow = head;
    Node *fast = head;

    bool isCycle = false;
    // cycle checking
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            cout << "cycle exists " << endl;
            isCycle = true;
            break;
        }
    }
    if (!isCycle)
    {
        cout << "cycle doesn't exist\n";
        return;
    }

    // removing cycle work
    slow = head;
    if (slow == fast)
    {
        // special case : tail->head

        while (fast->next != slow)
        {
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else
    {
        Node *prev = fast;
        while (slow != fast)
        {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL; // remove cycle
    }
}

int main()
{

    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next = ll.head; // lets make it a cycle

    // isCycle(ll.head);

    removeCycle(ll.head);
    ll.printlist();

    return 0;
}