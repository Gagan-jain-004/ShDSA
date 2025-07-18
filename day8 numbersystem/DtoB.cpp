#include <iostream>
#include <cmath>

using namespace std;



void binToDec(int binNum){
    int n= binNum;
    int decNum=0;
    int pow=1;
    while(n>0){
        int lastDig = n%10;
        decNum += lastDig*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<decNum<<endl;
}
void decToBin(int decNum){
    int n= decNum;
    int pow =1;  //10^0 10^1 10^2 
    int binNum = 0;

    while(n!=0){
        int rem = n%2;
        binNum += rem*pow;
        n=n/2;
        pow=pow*10;
    }
    cout<<binNum;

}

int main() {
    binToDec(100);
     decToBin(4);
}