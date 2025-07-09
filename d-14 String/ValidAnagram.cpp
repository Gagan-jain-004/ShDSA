// anagram are those whose words having same letters with differrent arrangement
//approach 1(nlogn)-   sort both the words and compare if same then it will be anagram
//approach -2  (count of letters storing approach)
// first check whether the length is equal or not 
// then store the count of 1sr str each alphabet  a to z , count[str[i]-'a']
//traverse the 2nd str



#include<bits/stdc++.h>
using namespace std;



bool isAnagram(string str1,string str2){

    if(str1.length() != str2.length()){
        cout<<"not a anagram";
        return false;
    }

    char count[26]={0};
    for(int i=0;i<str1.length();i++){
       int idx =str1[i]-'a';       // getting pos of each alpha in str1
       count[idx]++;

    }

    for(int i=0;i<str2.length();i++){
        int idx = str2[i]-'a';
        if(count[idx]==0) {                  // if letter in str2 not present in str1 
         cout<<"not a valid anagrams\n";
            return false;
        }
        count[idx]--;
    }
    cout<<"valid anagram";
    return true;
}


int main(){
   string str1= "anagram";
   string str2="nagaram";

    isAnagram(str1,str2);

}

