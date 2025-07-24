
#include <iostream>
#include <vector>
using namespace std;

// create Stack using vector
// templating so any dataype of stack for storing can be used by only changing  in main

template<class T>            // so  for datatype just  write in main when u create stack object


class Stack
{
    vector<T> vec;

public:
    void push(T val)
    {
        vec.push_back(val);
    }

    void pop()
    {
        if (isempty())
        {
            cout << "stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    T top()
    {
        // if (isempty())
        // {
        //     cout << "stack is empty\n";
        //     return -1;
        // }
        int lastindex = vec.size() - 1;
        return vec[lastindex];
    }

    bool isempty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    Stack<char> st;

    st.push('c');
    st.push('b');
    st.push('a');

    while(!st.isempty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}