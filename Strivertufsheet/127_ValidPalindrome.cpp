


//--------------------------------------------       o(n)  approach 
class Solution {
public:
    bool isPalindrome(string s) {
        string res;
       for(char ch :s ){
        if(isalnum(ch)){
            res+=tolower(ch);
        }
       }
       s= res;
        reverse(s.begin(),s.end());  // cant store in any variable becoz returns void 

        if(s!= res) return false;

        return true;
    }
};