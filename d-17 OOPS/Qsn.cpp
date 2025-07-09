
#include<bits/stdc++.h>
using namespace std;


class User {
    int id;
    string password;
    public:
    string username;

    User(int id){
        this->id = id;
    }
    void setPass(string password){
        this->password= password;
    }
    string getPass(){
        return password;
    }


};


int main(){

    User u1(32);
    u1.setPass("hulu");
    cout<<u1.getPass()<<endl;
}