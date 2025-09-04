#include <bits/stdc++.h>
using namespace std;

int longestCommonSubstring(string  str1,string str2){
    int n= str1.size();
    int m= str2.size();
    int ans=0;

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                ans = max(ans,dp[i][j]);
            }else{
                dp[i][j]=0;
            }
        }
    }
return ans;
}

int LIS(vector<int>arr){
    unordered_set<int>s(arr.begin(),arr.end());      //getting unique values of arr

    vector<int>arr2(s.begin(),s.end());
    sort(arr2.begin(),arr2.end());
    
    int n= arr.size();
    int m= arr2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(arr[i-1]==arr2[j-1]){
                dp[i][j]= 1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[n][m];

}


int main() {
    vector<int>arr ={50,3,10,7,40,80};

    cout<<LIS(arr)<<endl;
    


    return 0;
}