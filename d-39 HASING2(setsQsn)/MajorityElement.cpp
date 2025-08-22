#include <bits/stdc++.h>
using namespace std;


void majorityElement(vector<int>nums){

    unordered_map<int,int>m;    //<element,freq>

    for(int i=0;i<nums.size();i++){
        if(m.count(nums[i])){    // if key present in map  then increase its frequency
            m[nums[i]]++;
        }
        else{
            m[nums[i]] =1;            // if not present then start freq by 1
        }
    }

    for(pair<int,int> p:m){
        if(p.second>nums.size()/3) cout<<p.first<<" ";
    }

}


int main() {

vector<int>nums ={1,3,2,5,1,3,1,5,1}; 
vector<int>nums2={1,2};

majorityElement(nums);

    return 0;
}