
#include<bits/stdc++.h>
using namespace std;

class Animal{

    public:
        string color;

        void eat(){
            cout<<"eats\n";
        }
        void breathe(){
            cout<<"breathe\n";
        }
};

class Finch: public Animal{
    public:
    int fins;

    void swim(){
        cout<<"swim\n";
    }

    
};

int main(){

    Finch f1;
    f1.fins=3;
    f1.swim();

    return 0;

}