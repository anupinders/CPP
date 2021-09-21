#include<iostream>

using namespace std;

class Base{
    public:
    void display(){
        cout<<"\nInside Base Display()";
    }
    virtual void show(){
        cout<<"\nInside Base Show()";
    }
};

class Derived:public Base{
    public:
        void display(){
            cout<<"\nInside Derived Display()";
        }
        void show(){
            cout<<"\nInside Derived Show()";
        }   
};

int main(){

    Base bObj;
    Derived dObj;

    Base *bptr;
    cout<<"\n bptr points to base class object";
    bptr= &bObj;
    bptr->display();
    bptr->show();

    cout<<"\n bptr points to derived class object";
    bptr = &dObj;
    bptr->display();
    bptr->show();
    return 0;
}