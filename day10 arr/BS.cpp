#include<iostream>
#include <vector>
using namespace std;


int bin(int *arr,int n,int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
      int   mid = (s+e)/2;

        if(arr[mid]==key){
            return 1;
        }
        else if(arr[mid]<key){
            s=mid+1;
            
        }
        else{
            e=mid-1;
            
        }
    }
    return -1;
}
 
int main(){
     int arr[] = {1, 2, 3, 4, 5};
     int n = sizeof(arr)/sizeof(arr[0]);
cout<<"hell";
  int ans= bin(arr,n,5);
  cout<<ans;
  return 0;
}