
// optimized space with only result space 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int posIndex = 0, negIndex = 1;

        for (int num : nums) {
            if (num > 0) {
                result[posIndex] = num;
                posIndex += 2;
            } else {
                result[negIndex] = num;
                negIndex += 2;
            }
        }
        return result;
    }
};






// using queue 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>pos;
        queue<int>neg;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push(nums[i]);
            }else{
                neg.push(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i%2 == 0){
                nums[i]=pos.front();
                pos.pop();
            }
            else{
                nums[i]=neg.front();
                neg.pop();
            }
        }
    return nums;
    }
};