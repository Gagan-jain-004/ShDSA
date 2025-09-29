

// HASHING 
// Time Complexity: O(n)
// Space Complexity: O(n)
// Reason: We traverse the array once, and use a hash map to store each value and its index.
// Lookup and insert in unordered_map are O(1) on average.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>m;             //value and index
    
       for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];
            if(m.count(rem)){
                 nums= {i,m[rem]};
                 break;
            }
            else{
                m[nums[i]]=i;
            }
       }
    
    return nums;
    }
};