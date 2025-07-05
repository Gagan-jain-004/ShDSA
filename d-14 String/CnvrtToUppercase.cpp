// approach as position of small f and big F will be same as per theri case in alphabet so to conver one to antoher find the position of them in theri alphabetic order by
//  pos = word[i] - 'a' will give u the position of f in small abcd so to convert it to uppercase just add it to big A
//  word[i] - 'a' + 'A' will give u the position of F in big ABCD and then get printed

#include <bits/stdc++.h>
using namespace std;

void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else{
          word[i]= ch-'a'+'A';
        }
    }
}

int main()
{

    char word[] = "ApPle";
    int n = strlen(word);
    
    toUpper(word, n);
    cout<<word;
}