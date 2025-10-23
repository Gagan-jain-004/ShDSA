class Solution {
public:
    int maxDepth(string s) {
        
        int p=0;
        int ans=0;
        for(char ch: s){
            if(ch == '(') p++;
            if(ch== ')') p--;
            ans=max(ans,p);
        }
        return ans;
    }
};