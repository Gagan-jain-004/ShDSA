
#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
    void selection(int *arr, int n){
        
        for(int i=0;i<n;i++){
            int mini=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[mini]) mini=j;
            }
            swap(arr[i],arr[mini]);
        }
        print(arr,n);
    }



int main(){

    int arr[]={5,4,1,3,2};
    int n= sizeof(arr)/sizeof(arr[0]);

    selection(arr,n);
}