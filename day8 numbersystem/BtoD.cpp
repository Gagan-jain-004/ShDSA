#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 100;
    int x=n;
    int length=0;
  while(x!=0){
      x=x/10; 
      length++;
  }
  cout<<length<<" "<<n<<endl;
    int a = 0;
    for(int i=0;i<length;i++){
        int t =n%10;
            a= a+ t*(pow(2,i));
            n=n/10;
        }
        cout<<a;
}