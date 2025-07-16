
#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n,int i){

    if(i==n-1) return true;
    if(arr[i]>arr[i+1]){
       cout<<"not ";
        return false;
    }
     check(arr,n,i+1);
}

int main(){
int arr[4]={1,5,3,4};
check(arr,4,0);
    return 0;
}