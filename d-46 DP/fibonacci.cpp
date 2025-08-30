#include <bits/stdc++.h>
using namespace std;

int fib(int n){     // O(2^n)   brute forc
    if(n==0 || n==1) return n;

    return fib(n-1) + fib(n-2);
}


// DP approach  O(n)           // memization approach

int fibDP(int n,vector<int>&f){
    if(n==0 || n==1){
        return n;
    }

    if(f[n]!= -1){
        return f[n];
    }

    f[n]=fibDP(n-1,f) + fibDP(n-2,f);

    return f[n];

}

// DP approach  O(n)           // tabulation approach

int fibTab(int n){
    vector<int> fib(n+1,0);
    
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }


    return fib[n];

}

int main() {

    int n= 6;

    // cout<<fib(n)<<endl;

    // dp approach

    vector<int>f(n+1,-1);     //n+1 size and all initialize with -1 
   
    cout<<fibDP(n,f)<<endl;

    cout<<"tabular approach"<<endl;
    cout<<fibTab(n)<<endl;
    return 0;
}