
#include<bits/stdc++.h>
using namespace std;

class Car{
    public: 
    string name;
    string color;
    int * mileage;

    Car(string name,string color){
        this->name= name;
        this->color= color;
        mileage= new int;     //Dynamic  allocation
        *mileage=12;
    }

    //custom copy constructor
    Car(Car &original){
        cout<<"copying original to new.. \n";
        name=original.name;
        color=original.color;
        mileage=new int ;               // if we not create this inside cutom construtr then default compiler create the shallow copy , so  for deep copy we allocating different address to this mileage with same value 
        *mileage= *original.mileage;
    }

    ~Car(){
        cout<<"deleting object...\n";
        if(mileage != NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};

int main(){

    Car c1("BMW M4 CS","Black");
    Car c2(c1);      //compiler auto creates copy constructor in cpp insidely, if custom cpy cnstructor created then that  will get called 
    
    cout<<c2.name<<endl;

    cout<<*c2.mileage<<endl;
    *c2.mileage=10;

    cout<<*c1.mileage<<endl;        // ab ismai change na hoga 12 hei rhega coz u create own custom copy constructor which is creating deep copy (means allocating different address with same value),, but if u comment the cpy constructor it will give 10 due to shallow cpy creation by compilers cpy constructor

}