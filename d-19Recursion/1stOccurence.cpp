
#include<bits/stdc++.h>
using namespace std;

int occurence(int arr[],int n,int i,int target){

    if(i>n-1){
        cout<<"not found";
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
   return occurence(arr,n,i+1,target);
}

int main(){

    int arr[]={1,2,3,3,3,4};
    int target=78;
  cout<<  occurence(arr,6,0,target);

    return 0;
}