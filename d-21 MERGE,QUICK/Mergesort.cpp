
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








// call stack

/*
mergesort(0,5)
 ├─ mergesort(0,2)
 │   ├─ mergesort(0,1)
 │   │   ├─ mergesort(0,0) → return
 │   │   ├─ mergesort(1,1) → return
 │   │   └─ merge(0,0,1) → {3,6}
 │   ├─ mergesort(2,2) → return
 │   └─ merge(0,1,2) → {3,6,7}
 ├─ mergesort(3,5)
 │   ├─ mergesort(3,4)
 │   │   ├─ mergesort(3,3) → return
 │   │   ├─ mergesort(4,4) → return
 │   │   └─ merge(3,3,4) → {2,5}
 │   ├─ mergesort(5,5) → return
 │   └─ merge(3,4,5) → {2,4,5}
 └─ merge(0,2,5) → {2,3,4,5,6,7}



How the merge() function works here

Take final merge example:

Left = {3, 6, 7}, Right = {2, 4, 5}


i points to Left[0] = 3

j points to Right[0] = 2

Compare: 2 < 3 → push 2

Now:

temp = {2}, i=0, j=1


Compare 3 vs 4 → push 3

Compare 6 vs 4 → push 4

Compare 6 vs 5 → push 5

Leftover elements {6,7} → append them

So temp = {2,3,4,5,6,7} → copied back into original array.

✅ Final Answer:
Sorted Array = {2, 3, 4, 5, 6, 7}

*/