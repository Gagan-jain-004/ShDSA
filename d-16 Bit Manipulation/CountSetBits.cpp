// finding sum of binary bits of num eg)for n=10;  the binary = 1010  then sum = 1+0+1+0 = 2 
//approach - get last binary bit of num then sum , then right shift . repeat both steps till num>0


#include<iostream>
using namespace std;


int countSetBits(int num){
    int count=0;

    while(num>0){
        int lastDig = num & 1;
        count+= lastDig;
        num= num>>1;
    }
    cout<<count<<endl;
    return count ;
}



void fastexpo(int x,int n){            // to find x ki power n in log(n)complexity as normal approach is of O(n) like for n=3 (3*3*3*3*3*3...) so we use bit manipulation for it 
    int ans=1;
    while (n>0)
    {
        int lastBit = n&1;
        if(lastBit){
            ans= ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<ans;
}

int main(){
countSetBits(7);


fastexpo(3,5);
}