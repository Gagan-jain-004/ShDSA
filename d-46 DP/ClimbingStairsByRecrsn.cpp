// count ways to reach the nth stair . A person can climb 1 or 2 stairs at a time


#include <bits/stdc++.h>
using namespace std;

int countWayRec(int n){     //O(2^n)  as it is like fibonacci
    if(n==0 || n==1) return 1;

    return countWayRec(n-1) + countWayRec(n-2);
}


//dp memoization 

int countWayMem(int n,vector<int>&dp){     //O(n)  as it is like fibonacci
    if(n==0 || n==1) return 1;

    if(dp[n]!= -1)   return dp[n];

    dp[n]= countWayMem(n-1,dp) + countWayMem(n-2,dp);
    return dp[n];
}

// dp tabulation

int countWayTab(int n){     //O(n)  as it is like fibonacci
     vector<int>dp(n+1,0);
     dp[0]=1;
     dp[1]=1;

     for(int i=2;i<=n;i++){
        dp[i]= dp[i-1]+ dp[i-2];
     }

     return dp[n];

}


int main() {

int n=4;
cout<<countWayRec(n)<<endl;

cout<<"Memo: ";
vector<int> dp(n+1,-1);
cout<<countWayMem(n,dp)<<endl;



cout<<"tabular ";
cout<<countWayTab(n)<<endl;

    return 0;
}