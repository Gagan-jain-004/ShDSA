
#include <bits/stdc++.h>
using namespace std;



int main() {

// to reverse string

string s =  "hello, karol";
reverse(s.begin(),s.end());


// to avoid alphanumeric
string res; 
for( char ch : s)
 if(isalnum(ch)){
            res+=tolower(ch);
        }
cout<<res;                // output      lorakolleh



    return 0;
}