// rightmost digit in binary is 0 then  it will be even else odd 
//approach- just do & with 0000..001 so when on doing this if ans == 00000 then that binary is even else odd 


#include<iostream>
using namespace std;

void oddOrEven(int num){
    if((num & 1)==0){          // means & is used then num's binary will & with binary of 1 
        cout<<"even\n"; 
    }
    else{
        cout<<"odd\n";
    }
}

int main(){
    oddOrEven(5);
    oddOrEven(8);
}