// as from below u can see datatype of pq is class , so for what attribute we want to make max heap that is need to specify
// so for that operator overloading is used 

#include <bits/stdc++.h>
using namespace std;



class Student{
    public: 
    string name;
    int marks;

    Student(string name,int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const Student &obj) const {
        return this->marks<obj.marks;                        // so max heap  will make via marks comparison , just becoz of this operator overloading
    }

};

int main() {

priority_queue<Student>pq;

pq.push(Student("aman",85));
pq.push(Student("bhavan",95));
pq.push(Student("chirag",65));

    while(!pq.empty()){
        cout<<"top= "<<pq.top().name<<" " <<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}