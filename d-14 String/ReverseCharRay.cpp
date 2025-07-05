
#include<bits/stdc++.h>
using namespace std;

void reverse(char ch[],int n){
    
    int s= 0, e=n-1;

    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}


int main(){

    char ch[]="code";
    // int n=sizeof(ch)/sizeof(ch[0]);
    reverse(ch,strlen(ch));
    cout<<ch;

    return 0;
}