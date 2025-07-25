// return true if duplicate unecessary parenthesis present  like ((a)) +(b)   , as a contain unecssary() so it is considered as duplicateparenthesis

// approach push in it stack  till u get close bracket then start poping till get match open bracket of it , if u get open bracket just at top nothing between them then return duplicate exist

#include <bits/stdc++.h>
using namespace std;
 
bool isDuplicate(string str){
    stack<char>s;

    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch != ')') {      // non closing things - so push in stack
            s.push(ch);
        }else{
            //closing  - so check if stack top contains open braces (if yes then return duplicate  exist) else pop till u get corresponding open braces

            if(s.top()=='('){
                return true;       //duplicate  present 
            }
            else {
                while(s.top()!='('){
                    s.pop();
                }
                s.pop();
            }

        }

    }
    return false;
}

int main()
{

    string str1 = "((a+b))";  // true
    string str2 = "((a+b)+(c+d))"; // false

    cout<<isDuplicate(str1)<<endl;
    cout<<isDuplicate(str2)<<endl;

    return 0;
}