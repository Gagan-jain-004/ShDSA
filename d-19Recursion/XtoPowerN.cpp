
#include<bits/stdc++.h>
using namespace std;

int pow(int x,int n){   //O(logn)

    if(n==0){
        return 1;
    }

    int halfPow = pow(x,n/2);
    int halfPowSquare = halfPow * halfPow;

    if(n%2 !=0){
        //means n is odd
        return x*halfPowSquare;
    }

    return halfPowSquare;
}

int main(){

cout<<pow(2,5)<<endl;
    return 0;
}