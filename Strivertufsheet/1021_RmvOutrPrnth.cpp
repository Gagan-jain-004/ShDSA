class Solution {
public:
    string removeOuterParentheses(string s) {
        
      int n= s.length();
      string st="";
        int level=0;
        for(char ch: s){

            if(ch=='('){
               if(level>0) st+=ch;
                level++;
            }
            else if(ch==')'){
                level--;
                if(level>0) st+=ch;
            }
        }

       
    return st;
    }
};