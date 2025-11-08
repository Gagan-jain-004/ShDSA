class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());

        string ans="";
        int minlen = min(strs[0].length(),strs[strs.size()-1].length());

        for(int i=0 ; i<minlen;i++){
            if(strs[0][i]!= strs[strs.size()-1][i]) break;
            ans+=strs[0][i];
        }

        return ans;

    }
};