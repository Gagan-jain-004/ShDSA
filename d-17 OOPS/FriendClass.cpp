
#include<bits/stdc++.h>
using namespace std;


class A {
    string secret ="secret data";
    friend class B;
    friend void reveal(A &obj);
};

class B{
    public:
    void show(A &obj){
        cout<<obj.secret<<endl;
    }
};

void reveal(A &obj){
    cout<<obj.secret<<endl;
}

int main(){

    A a;
    B b;
    b.show(a);
    reveal(a);
    return 0;
}