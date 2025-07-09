

#include<bits/stdc++.h>
using namespace std;

void funcInt(){
    int *ptr= new int;
    *ptr =5;
    cout<<*ptr;

    delete ptr;
}

void funcArr(){
    
    int size;
    cin>>size;
    int *ptr= new int[size];
     
    delete [] ptr;           // have to self free memory

}

int main(){
   funcArr();
   funcInt();
   
   

     
}