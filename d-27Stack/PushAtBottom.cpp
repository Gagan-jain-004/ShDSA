
#include<bits/stdc++.h>
using namespace std;

void pushatbottom(stack<int>&s,int val){

    if(s.empty()){
        s.push(val);                //all empty so fill required val
        return;
    }

    int temp = s.top();
    s.pop();                    //saare pop krlo
    pushatbottom(s,val);
    s.push(temp);              // backtracking 😏  to fill out back the poped element after putting val at bottom

    
}

int main(){
stack<int>s;
s.push(3);
s.push(2);
s.push(1);

pushatbottom(s,4);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}