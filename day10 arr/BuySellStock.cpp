
#include<bits\stdc++.h>
using namespace std;


void maxProfit(int *prices , int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    
    for (int i = 1; i < n; i++)
    {
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }
    
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit,currProfit);
    }
    
    cout<<"max Profit = "<<maxProfit<<endl;    
    
}


    int main(){
        int prices[6]={7,1,5,3,6,4};
        int n= sizeof(prices) / sizeof(int);
        
        maxProfit(prices,n);
        return 0;
    }







/*  my brute force approach finding and storing best buying price then max profit 
void printarray(int *bestBuy,int n){
    for(int i=0;i<n;i++) cout<<bestBuy[i]; 
}

void maxProfit(int *prices,int n){
    int bestBuy[n];
    
    for(int i=0;i<n;i++){
        int mini=prices[0];
        for(int j=0;j<=i;j++){
            int curr= prices[j];
            mini=min(curr,mini);
        }
        bestBuy[i]=mini;
    }
    printarray(bestBuy,n);
    cout<<endl;
    int profit=INT_MIN;
    for(int i=0;i<n;i++){
            int currprofit = prices[i]-bestBuy[i];
            profit = max(currprofit,profit);
        }
        cout<<profit<<endl;
    }
    
    
    
    
    int main(){
        int prices[6]={7,1,5,3,6,4};
        int n= sizeof(prices) / sizeof(int);
        
        maxProfit(prices,n);
        return 0;
    }
    
    */