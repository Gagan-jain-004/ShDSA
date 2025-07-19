
#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void changeArr(int arr[],int n,int i){
    if(i==n){
        printarr(arr,n);
        return;
    }
    arr[i]=i+1;
    changeArr(arr,n,i+1);  // below steps starts occuring after the return from base case hits 
    
    arr[i] -=2;     //backtrack

}

int main(){
    int arr[5]={0};
    int n=5;

    changeArr(arr,n,0);
    printarr(arr,n);

    return 0;
}