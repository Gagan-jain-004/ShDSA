
#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    string ans;
    stack<char>s;

    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char top = s.top();
        ans+= top;
        s.pop();
    }

    //alter way 
    // for(int i=0;i<str.length();i++){
    //     ans.push_back(s.top());
    //     s.pop();
    // }
   
    return ans;
}

int main(){
string str = "falcony";

 cout<< reverseString(str);
 
    return 0;
}