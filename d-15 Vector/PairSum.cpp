
#include<bits/stdc++.h>
using namespace std;


vector<int> pairSum(vector<int>v,int target){

    int s=0;
    int e=v.size()-1;
    while(s<e){
        if(v[s]+v[e] == target) return {s,e};

        else if(v[s]+v[e]<target) s++;
        else e--;
    }
    cout<<"not found";
    return {};
}

int main(){

    vector<int>v={2,7,11,15};
    int target=25;
 
  v= pairSum(v,target);
    cout<<v[0]<<" "<<v[1];
}