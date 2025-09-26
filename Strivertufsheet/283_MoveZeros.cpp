


// tc and sc  = o(n)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

       vector<int>v;
        int count=0;
       for(auto i:nums){
        if(i!=0){
            v.push_back(i);
        }
        else{
            count++;
            }
       }

       for(int i=0;i<count;i++) v.push_back(0);

        nums=v;

    }
};