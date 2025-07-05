#include <iostream>
using namespace std;


void ref(int *ptr){
    *ptr=432;
}

void refvar(int &x){
    x=543;
}
 
int main(){
    int a = 21;
    ref(&a);        //pass by ref
    cout<<a<<endl;

     
    //reference variable 
    int x= 34;
    refvar(x);
    cout<<x;       //give 543
}