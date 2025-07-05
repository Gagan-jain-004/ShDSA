
#include<bits/stdc++.h>
using namespace std;

bool palindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s]!=ch[e]) return false;
        s++;
        e--;
    }
    return true;
}

int main(){
int n;
cin>>n;
char ch[n];
cin>>ch;

int ans=palindrome(ch,n);

cout<<ans;
}
