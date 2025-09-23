// striver solutn link    https://takeuforward.org/data-structure/remove-duplicates-in-place-from-sorted-array/


// tc= n   space = 1

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k= 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[k-1]) {
                nums[k]=nums[i];
                k++;
            }
        }
       

        return k;
    }
};


// tc = nlogn    , space = n

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       set<int>s;

       for(auto i:nums){
            s.insert(i);
       }
       int k= s.size();
       int j=0;
       for(auto el:s){
            nums[j++] = el;
       }

        return k;
    }
};