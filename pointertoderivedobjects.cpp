#include<iostream>
using namespace std;
class Base{
    public:
    int b;
    void show(){
        cout<<"Show() Base Class\n";
        cout<<"b = "<<b<<"\n";
    }
};
class Derived:public Base{
    public:
        int d;
        void show(){
            cout<<"Show() Derived Class\n";
            cout<<"b = "<<b<<"\n"<<"d = "<<d<<"\n";
        }
};

int main(){
    Base *bptr;
    Base baseObj;
    bptr= &baseObj;
    bptr->b=10;
    cout<<"Right now Base class pointer pointing to Base class object\n";
    bptr->show();
    Derived derivedObj;
    bptr = &derivedObj;
    bptr->b =90;
    //bptr->d =90;// not allowed
    cout<<"Right now Base class pointer pointing to Derived class object\n";
    bptr->show();
    Derived *dptr;
    dptr=&derivedObj;
    dptr->d =300;
    cout<<"Right now using pointer to Derived class object\n";
    dptr->show();
    cout<<"using the typecasting of derived class pointer on base class pointer";
    ((Derived*)bptr)->d = 40;
    ((Derived*)bptr)->show();
    return 0;
}