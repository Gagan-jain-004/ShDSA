
#include<bits/stdc++.h>
using namespace std;

void permutation(string &str,int i){

    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j=i;j<str.length();j++){

        swap(str[i],str[j]);
        permutation(str,i+1);
        
        swap(str[i],str[j]);   //backtrack

    }
}

int main(){

    string str = "abc";
    int i=0;
    // cout<<str.length()<<endl;
    permutation(str,i);

    return 0;
}