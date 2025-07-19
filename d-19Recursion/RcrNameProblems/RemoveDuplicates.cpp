
#include<bits/stdc++.h>
using namespace std;

void removeduplicates(string str, string ans,int i,int map[26]){

    if(i==str.size()){
        cout<<"ans: "<<ans<<endl;
        return;
    }

    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]==true){
        //duplicate
        removeduplicates(str,ans,i+1,map);
    }else{  //not duplicate
        map[mapIdx]= true;
        removeduplicates(str,ans+str[i],i+1,map);
    }
}

int main(){

    string str="appnna";
    string ans="";
    int map[26]={false};

    removeduplicates(str,ans,0,map);
    
    return 0;
}