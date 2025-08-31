#include <bits/stdc++.h>
using namespace std;


// recursion approach
int knapsackRec(vector<int>val,vector<int>wt,int W,int n){

    if(n==0 || W==0){     //O(2^n)
        return 0;
    }

    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <=W){
        //include

       int ans1= knapsackRec(val,wt,W-itemWt,n-1)+itemVal;
       
       //exclude
       int ans2= knapsackRec(val,wt,W,n-1);
       
       return max(ans1,ans2);
       
    }else{
        //exclude
        return knapsackRec(val,wt,W,n-1);

    }

}

// dp memoization approach
int knapsackMem(vector<int>val,vector<int>wt,int W,int n,vector<vector<int>>&dp){

    if(n==0 || W==0){     //O(2^n)
        return 0;
    }

    if(dp[n][W] != -1){
        return dp[n][W];
    }

    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <=W){
        //include

       int ans1= knapsackMem(val,wt,W-itemWt,n-1,dp)+itemVal;
       
       //exclude
       int ans2= knapsackMem(val,wt,W,n-1,dp);
       
       dp[n][W]= max(ans1,ans2);
       
    }else{
        //exclude
        dp[n][W]= knapsackMem(val,wt,W,n-1,dp);

    }
    return dp[n][W];

}

int main() {

   vector<int>val = {15,14,10,45,30};
   vector<int>wt = {2,5,1,3,4};
    int W =7;
    int n= 5;

    cout<<knapsackRec(val,wt,W,n)<<endl;

    cout<<"dp memo"<<endl;

    vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
    cout<<knapsackMem(val,wt,W,n,dp)<<endl;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}