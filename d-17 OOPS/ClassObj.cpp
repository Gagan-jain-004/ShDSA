#include <iostream>
using namespace std;

class Student{
    //properties
    private:
    string password;

    public:
    Student(){
        cout<<"constructor auto call at obj creation"<<endl;
    }
    int id;
    string name;
    string bio;
    float cgpa;

    //Methods

    void edit(string newBio){
        bio = newBio;
    }
    
};

int main(){

    Student s1;
    s1.name="dlksj";
    cout<<s1.name<<endl;
    
    
    

}