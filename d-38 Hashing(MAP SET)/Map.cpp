// all code syntax likke unorderedmap
// just difference is map prints output in sortd order

#include <bits/stdc++.h>
using namespace std;



int main() {

map<string,int>m;

m["India"] =150;                // insertion like array just here key is taken as index  cox it cnvrt into int  under the hood using hashing fxn
m["US"] =50;
m["Nepal"] =10;
m["Nepal"] =54;      //overwrite 10


cout<<m["US"]<<endl;
// for printing all use pair for that

for(pair<string,int>country: m){
    cout<<country.first<<","<<country.second<<endl;
}

// searching whether particular entry is present or not 

if(m.count("Nepal")){
    cout<<"Nepal exists\n";
}else{
    cout<<"Nepal doesn't exist\n";
}


// erase to remove from map
m.erase("Nepal");


if(m.count("Nepal")){
    cout<<"Nepal exists\n";
}else{
    cout<<"Nepal doesn't exist\n";
}


    return 0;

}

