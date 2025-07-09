// approach  do leftshift with 1<<i then & with num , it lets the 1 to come at ith location to get bith of there if ans=0 it was 0 else 1 at ith location in num

#include<iostream>
using namespace std;

void Getith(int num,int i){
   int bitMask=1<<i;
   if(num & bitMask ==0){
    cout<<0<<endl;
   }else{
    cout<<1<<endl;
   }
    
}



//set ith bit - means at ith position if 0 is present then change it to 1  , or 1 hai toh 1 rehne do 
// approach nums | 1<<i    it will fix 1 at ith  position

int setIthBit(int num,int i){
    int bitMask=1<<i;
    return (num|bitMask);
}



// clear ith bit - means at ith position 0 to 0 and 1 to 0 
//aproach- 1<<i   i will give u like  00000...010000..00 , 1 ath ith pos then do ~(not of it ) that will give  11111...1011...1 , 0 at ith position then do & with num
int clearIthBit(int num,int i){
    int bitMask=~(1<<i);
    return (num & bitMask);
}




// to check for if a number is in power of 2 or not  
// approach do & of the num and num-1 if ans =0 theen number is in power  of 2 else not        (for self check do & of the numbers binary )

bool isPowerof2(int num){
    if(num & (num-1) ==0 ){
        return true;
    }
    return false;
}


//clear last i bits so do     nums & (~0<<i)
int clearIBits(int num,int i){

    int bitMask= (~0)<<i;
    num = num & bitMask;
    cout<<num<<endl;

}

int main(){
    Getith(5,1);
    Getith(8,6);

    setIthBit(6,3);
    clearIthBit(6,3);

    isPowerof2(4);

    clearIBits(15,2);

}