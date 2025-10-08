class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size()==0) return 0;
       unordered_set<int>s;
        
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int ans=1 ;
        for(int x:s){

            if(s.find(x-1)== s.end()){
                int curr= 1;
                int it =x ;
                while(s.find(it+1)!= s.end()){
                    it++;
                    curr++;
                }
                ans = max(ans,curr);
            }

        }
        return ans;


    }
};