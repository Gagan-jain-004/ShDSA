
#include<iostream>
#include<string>
using namespace std;


int main(){

    string str;
    // getline(cin,str);
    // cout<<str<<endl;
    // cout<<str[3];


    // for(int i=0;i<str.length();i++){
    //     cout<<str[i]<<endl;
    // }

    // alter way using for each loop 

    str="helele cpp using ";
    
    // for( char ch: str ){
    //     cout<<ch<<",";
    // }


    //member fxns 
    
    cout<<str.substr(1,3)<<endl;          //1 is start and 3 is size to print

cout<<str.find("cpp")<<endl;    //gives thr first ocuurence index of word u give


}