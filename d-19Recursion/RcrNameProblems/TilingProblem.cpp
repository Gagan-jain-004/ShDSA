
#include<bits/stdc++.h>
using namespace std;

int tilingProblem(int n){

    if(n == 0 || n== 1) return 1;
    //vertical 
    int ans1= tilingProblem(n-1);   //2 x n-1

    //horizontal 
    int ans2 = tilingProblem(n-2);

    return ans1+ans2;
}


int main(){

    cout<<tilingProblem(4)<<endl;

    return 0;
}