// leetcode 518
// return number of combinations 
// pttrn like unbound knapsack 
// columns = amt+1  and rows = no. of coins +1  
// clomuns index = amount value , and row index  = max no. of items can use  to fulfill the amount 
// and the arr[i][j] =  no. of combinations exist for the required amount from items sums
#include <bits/stdc++.h>
using namespace std;

// leetcode soln
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,0));

        for(int i=0;i<n+1;i++){
            dp[i][0]=1;

        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]= dp[i][j-coins[i-1]] + dp[i-1][j];
                }else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        cout<<"printing array"<<endl;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<amount+1;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

    return dp[n][amount];
    }
};

int main() {



    return 0;
}