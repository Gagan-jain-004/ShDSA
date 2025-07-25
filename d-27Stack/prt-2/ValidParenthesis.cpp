// open brackets must be closed by the same type of  braces
// closed in the correct order is must ever close brackest has a corresponding  open bracket of the same type
// wrong -  [(])   correct - [()]   ,  ([])

// approach open braces ko stack mai fill kro then pop krte jao aur close walo sai match krte jao if match then set else not set

#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // closing braces dealing
            if (s.empty())
            { // check so if insufficient opening brackets are there
                return false;
            }

            // match
            int top = s.top(); // getting top of stack containing open brackets
            if ((top == '(' && ch == ')') ||
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']'))
            {
                s.pop(); // so one braces match then remove for further open braces cheack
            }

            else
            {
                return false;
            }
        }

    }

  return s.empty();
}

int main()
{

    string str1 = "([}])";  // invalid
    string str2 = "([{}])"; // valid

    cout<<isValid(str1)<<endl;
    cout<<isValid(str2)<<endl;

    return 0;
}