// for getting result as ascending order we use max heap   
// and for descending order we use min heap 

// retain it in heap   from n/2 index to n only leaf nodes exist , so there child wont exist so need of compare with their child as they dont exist so ignore leaf


#include <bits/stdc++.h>
using namespace std;

void heapify(int i,vector<int>&arr,int n){
    int left = 2*i+1;
    int right = 2*i+2;
    int maxI =i;

    if(left<n && arr[left]>arr[maxI]){
        maxI = left;
    }

    if(right<n && arr[right]>arr[maxI]){
        maxI = right;
    }

    if(maxI != i){
        swap(arr[i],arr[maxI]);
        heapify(maxI,arr,n);

    }

}

void heapSort(vector<int>&arr){
    int n= arr.size();
    //step1: build maxheap

    for(int i=n/2-1; i>=0;i++){
        heapify(i,arr,n);
    }

    //step 2 : taking elements to correct position
    for(int i=n-1;i>= 0; i--){
        swap(arr[0],arr[i]);
        heapify(0,arr,i);
    }

}

int main() {

vector<int>arr = {1,4,2,5,3};
heapSort(arr);

for(int i =0;i<arr.size();i++) {
    cout<<arr[i]<<" ";
}
return 0;
}