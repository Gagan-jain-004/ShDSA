class Solution {
public:
    string reverseWords(string s) {
    int st=0;
    int e=s.length()-1;
    while (st <= e && s[st] == ' ') st++;
        while (e >= st && s[e] == ' ') e--;

    string temp,ans;

    while(st<=e){
        char ch = s[st];
        if(ch!=' '){
            temp+=ch;
        }
        else if(ch==' '){
            if (!temp.empty()) {
            if(ans!="") ans=temp + " " + ans;
            else ans= temp;
            temp="";
            }
        }
        st++;
    }

    if(temp!=""){
         if(ans!="") ans=temp + " " + ans;
            else ans= temp;
    }
    
        return ans;
    }
};