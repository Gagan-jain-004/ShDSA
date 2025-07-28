// qsn like 12345678910     , interleave it by first divide in half then join alter values       like output - 1 6 2 7 3 8 4 9 5 10

//approach divide halfs in two queues then push first half element in 2nd queue then push ffront element of 2nd queue and popping simulatneously after pushed at back



#include<bits/stdc++.h>
using namespace std;

void interleave(queue<int>&org){       //big mistake as  u want to change to reflect in orginal array (so use it by reference )
    int n= org.size();
    queue<int>first;

    for(int i=0;i<n/2;i++){
        first.push(org.front());
        org.pop();
    }

    while(!first.empty()){
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }

}

int main(){

    queue<int>org;
    for(int i=1;i<=10;i++){
        org.push(i);
    }

    interleave(org);

    for(int i=1;i<=10;i++){
        cout<<org.front()<<" ";
        org.pop();
    }
    cout<<endl;

    return 0;
}