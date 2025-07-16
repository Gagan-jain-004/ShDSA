
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n<0) return ;
    cout<<n<<" ";
    
   print(n-1);
}

int sum(int n){
  if(n==0) return 0;
  return (n+sum(n-1));
}

int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  return (fib(n-1) + fib(n-2));
}

int main(){

    print(5);
  int ans= sum(3);
cout<<ans;

int fi=fib(4);
  cout<<fi; 


return 0;
}