
#include<bits/stdc++.h>
using namespace std;

// #include<cstring>      no need as above is bits 

int main(){

    char str1[100]="starting ";
    char str2[100] = "fix it ";
    // strcpy(str1,str2);       //str1 is destination
    cout<<str1<<endl;

    strcat(str1,str2);
    cout<<str1<<endl;

    cout<<strcmp(str1,str2)<<endl;             //compares 0 for same , as s>f so +ve is ans 

}