
#include<bits/stdc++.h>
using namespace std;


void reverse(queue<int>&q){
    int n= q.size();

    stack<int>s;
    for(int i=0;i<n;i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        q.push(s.top());
        s.pop();
    }
}

int main(){

queue<int>q;

q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

int n=  q.size();
reverse(q);

for(int i=0;i<n;i++){
    cout<<q.front();
    q.pop();
}

    return 0;
}