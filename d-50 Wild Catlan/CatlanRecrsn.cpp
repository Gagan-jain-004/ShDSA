#include <bits/stdc++.h>
using namespace std;

int catalanRec(int n){
    if(n==0 || n==1){
        return 1;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+= catalanRec(i)*catalanRec(n-i-1);
    }

    return ans;

}

int main() {

    int n=4;
    cout<<catalanRec(n)<<endl;

    cout<<"to print sequence of catlan till n "<<endl;
    for(int i=0;i<=n;i++){
        cout<<catalanRec(i)<<" ";
    }

    return 0;
}