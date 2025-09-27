//XOR APPROACH      4^0 = 4

class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
       int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;

    }
};






// hashmap approach

class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
       unordered_map<int,int>m;

       for(int i=0;i<nums.size();i++){
        if(m.count(nums[i])){
            m[nums[i]]++;
        }
        else{
            m[nums[i]]=1;
        }
       }
int ans;
       for(pair<int,int>let : m){
        if(let.second==1){
              ans= let.first;
        }
       }
return ans;
    }
};