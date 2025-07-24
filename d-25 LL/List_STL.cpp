
#include<bits/stdc++.h>
using namespace std;

void printList(list<int>ll){

     // // iterators use to traverse through elements 
    list<int>::iterator itr;
    for(itr= ll.begin();itr!= ll.end();itr++){
        cout<<(*itr)<<" -> ";
    }
    cout<<"NULL"<<endl;

}

int main(){
    list<int>ll;
     
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);

    // // iterators use to traverse through elements 
    // list<int>::iterator itr;
    // for(itr= ll.begin();itr!= ll.end();itr++){
    //     cout<<(*itr)<<" -> ";
    // }


    //size
    cout<<ll.size()<<endl;

    cout<<"head: "<<ll.front()<<endl;
    cout<<"head: "<<ll.back()<<endl;

    ll.pop_back();
    printList(ll);

    ll.pop_front();
    printList(ll);

    return 0;
}