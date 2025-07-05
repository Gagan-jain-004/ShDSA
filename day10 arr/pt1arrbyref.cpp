#include<iostream>
#include <vector>
using namespace std;


void func(int brr[]){
    int len= sizeof(brr)/sizeof(int) ;
    
        brr[0]=45;
        brr[1]=478;
}

void func2(int *ptr){
    ptr[0]=102;
}


int main(){
    int arr[6]={4,27,3,45,78,980};
    
    int maxi;
    for(int i=0;i<5;i++){
        maxi = max(arr[i],arr[i+1]);
   
//    cout<<maxi<<endl;
 }
cout<<maxi<<endl;

func(arr);
cout<<arr[0]<<endl;

func2(arr);
cout<<arr[1];
    // vector<int> vr={4,5,6};
    // cout<<vr.size();
    
}