
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int mid , int e){
    vector<int>temp;
    int i=s;
    int j=mid+1;

    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<= mid){
        temp.push_back(arr[i++]);
    }

    while(j<= e){
    temp.push_back(arr[j++]);
    }

    // copying temp to original arr
    for(int id=s,x=0;id<=e;id++){
        arr[id]= temp[x++];
    }

}

void mergesort(int arr[],int s,int e){

    if(s>=e) return;

    int mid= s+ (e-s)/2;
    mergesort(arr,s,mid);    //left half
    mergesort(arr,mid+1,e);   // right half

    merge(arr,s,mid,e);
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[6]={6,3,7,5,2,4};
    int n= 6;
    mergesort(arr,0,n-1);
    print(arr,n);
    return 0;
}