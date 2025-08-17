// priority queue is implementation of heap , by default it is max heap (means highest element is priority in it ) 
// pq tc is (n+ klogn)    which is better than sort tc(nlogn)


#include <bits/stdc++.h>
using namespace std;


int main() {
    // priority_queue<int>pq;      //by default max heap 

    priority_queue<int,vector<int>,greater<int>>pq;      //to use min  heap  we have to pass container vector and custom comparator 

    pq.push(5);
    pq.push(10);
    pq.push(3);
    pq.push(7);

    while(!pq.empty()){
        cout<<"top: "<<pq.top()<<endl;
        pq.pop();
    }


    return 0;
}