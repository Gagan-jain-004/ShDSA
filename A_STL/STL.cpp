//  1) array ka mamla

#include <iostream>
#include<array>  // this is for array stl(standard template library)

using namespace std;
int main(){
    int basic[3]  = {1,2,3};
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i=0; i<size;i++){
        cout<<a[i]<<endl;
    }
cout<<"Element at 2nd Index is : "<<a.at(2)<<endl;
cout<<"Empty or not  "<<a.empty() <<endl;
cout<<"First Element  "<<a.front() <<endl;
cout<<"last Element   "<<a.back()<<endl;




}

//       2)VECTOR ka mamla

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int > v ;
    vector <int>a(5,1);  // 5 showa size and 1 is assigned to every index

    vector<int> last(a);
    cout<<"print last "<<endl;
    for(int i: last){
        cout<<i<<" ";
         }
cout<<endl;

cout<<"Capacity  "<<v.capacity()<<endl;

v.push_back(1);          // value dene ka tarika
cout<<"Capacity  "<<v.capacity()<<endl;

v.push_back(2);
cout<<"Capacity  "<<v.capacity()<<endl;

v.push_back(3);
cout<<"Capacity  "<<v.capacity()<<endl;
cout<<"Size  "<<v.size()<<endl;

cout<<"Element at 2nd Index "<<v.at(2)<<endl;

cout<< "front"<<v.front()<<endl;
cout<< "back"<<v.back()<<endl;

cout<<"before  pop"<<endl;
for(int i:v){
cout<<i<< " ";
}cout<<endl;

v.pop_back();
cout<<"after pop "<<endl;
for(int i:v){
cout<<i<< " ";
} cout<<endl;

cout<<"before clear size  "<<v.size()<<endl;
v.clear();
cout<<"after  clear  sizw "<<v.size()<<endl;


}



// deque ka mamla


#include<iostream>
#include<deque>
using namespace std;
int  main(){
    deque<int> d ;  // making deque

    d.push_back(1);      // element insert krna
    d.push_front(2);

    // d.pop_front()  // first element udana
    cout<<endl;
    cout<<"Print first index element "<<d.at(1)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); // it removes the first element

    cout<<"after erase "<< d.size()<<endl;
    for(int i:d){             // it means from i belong to d
         cout<<i<<endl;    // for print the element

    }
}



// list ki baari

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5, 100);
    cout << "Printing n" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    l.push_back(5);
    l.push_front(4);

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;
    l.erase(l.begin()); // starting element ko lapet  dega
    cout << "after erase " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << "size of list " << l.size() << endl;
}






// now it's    stack (based on   last in first out )


#include <iostream>
#include<stack>
using namespace std;
int main (){

stack<string> s;
s.push("arey ");
s.push("kon   ");
s.push("hai tu ");

cout<<"top element is  "<<s.top()<<endl;

s.pop();


cout<<"top element is  "<<s.top()<<endl;


cout<<" size of stack is  "<<s.size()<<endl;


cout<<"top element is  "<<s.empty()<<endl;   // 0 for false and 1 for true 


}





// Queue         means line (first in first out )

#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("hu ");
    q.push("rta");
    q.push(" kya ");
    q.push("nam ");

cout<<"Size before pop "<<q.size()<<endl;
cout<<"FIrst element is "<<q.front()<<endl;
q.pop();
cout<<"now the First element is "<<q.front()<<endl;
cout<<"SIze after pop "<<q.size()<<endl; 

}




// priority queue 


#include <iostream>
#include<queue>
using namespace std;
int main(){
     //max heap
     priority_queue<int>maxi;

// min heap
priority_queue<int,vector<int>,greater<int> > mini;

maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);
cout<<"size  is  "<<maxi.size()<<endl;

int n = maxi.size();
for(int i= 0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();

}cout<<endl; 



mini.push(5);
mini.push(1);
mini.push(0);
mini.push(4); 

int m = mini.size();
for(int i= 0;i<n;i++){
    cout<<mini.top()<<" ";
    mini.pop();

}cout<<endl; 

 
}

//set  ( har ek element ko ek baar hei store krta hai, modify nhi krskte delete kr skte hai )


#include<iostream>
#include<set>
using namespace std;
int main(){

set<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(6);
s.insert(6);
s.insert(0);
s.insert(0);
s.insert(1);
s.insert(1);

for(auto i:s ){
    cout<<i<<endl;
}cout<<endl; 

set<int>::iterator it = s.begin();
it++;

s.erase(it);

for(auto i:s ){
    cout<<i<<endl;
}

cout<<endl;
cout<<"-5 is present or not  "<<s.count(-5)<<endl; // count is for searching it is present or not 

set<int>::iterator itr = s.find(5);


}




// map 


#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
     
     m[1]="ho";
     m[13]="vacation";
     m[2]="bgm";
     
     m.insert({5,"chal"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
cout<<"finding  -13  "<<m.count(-13)<<endl;

 


}





// algorithm (time saver )


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

vector<int> v;

v.push_back(1); 
v.push_back(3); 
v.push_back(6); 
v.push_back(7); 

cout<<"FInding 6 --> "<<binary_search(v.begin(),v.end(),6)<<endl;

int  a = 3;
int b= 5;

cout<<"max --> "<<max(a,b)<<endl;

cout<<"min --> "<<min(a,b)<<endl;

swap(a,b);
cout<<endl<<"a --> "<<a<<endl;

string abcd =  "abcd ";
reverse(abcd.begin(),abcd.end());
cout<<"string--> "<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate"<<endl;

for(int i:v){
    cout<<i<<" ";
}


}