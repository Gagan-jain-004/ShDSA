
#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> vec;
    
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity "<<vec.capacity()<<endl;

    vec={1,2,3,4};
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity "<<vec.capacity()<<endl;


    vec.push_back(5);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

}