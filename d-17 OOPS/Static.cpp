
#include<bits/stdc++.h>
using namespace std;

void counter(){
    static int count =0;
    count++;
    cout<<count<<endl;
}


int main(){
    counter(); //1
    counter();//2
    counter();//3     this output will come coz static is used that means it created and intialize once thorughout the program execution
    

    return 0;
}