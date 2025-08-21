//sets stores unique values like keys 
// they are of two types unordered_sets or sets  both have implementation same as of unordered map and map respectively

#include <bits/stdc++.h>
using namespace std;



int main() {

unordered_set<int>s;

s.insert(1);
s.insert(5);
s.insert(3);
s.insert(2);

s.insert(2);

cout<<s.size()<<endl;   // size =4;      //coz it stors unique values only

if(s.find(3)!=s.end()){                // s.end() refers to null here 
    cout<<"3 exists\n";
}else{
    cout<<"3 doesn't exist\n";
}

for(auto el: s){
    cout<<el<<" ";
}cout<<endl;


////// Set 

set<int>st;

st.insert(1);
st.insert(5);
st.insert(3);
st.insert(2);

st.insert(2);

cout<<st.size()<<endl;   // size =4;      //coz it stors unique values only

if(st.find(3)!=st.end()){                // s.end() refers to null here 
    cout<<"3 exists\n";
}else{
    cout<<"3 doesn't exist\n";
}

for(auto el: st){
    cout<<el<<" ";
}cout<<endl;


    return 0;
}