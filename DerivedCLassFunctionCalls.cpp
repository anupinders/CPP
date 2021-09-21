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
        void show(){//overridding functionality of inheritance
            //Base::show();
            cout<<"Show() Derived Class\n";
            cout<<"b = "<<b<<"\n"<<"d = "<<d<<"\n";
        }
        void show(int r)
        {
            cout<<"overloaded Show(int) Derived Class\n";
            cout<<"R = "<<r<<"\n";
        }
};

int main(){
    Base bobj;
    Derived dobj;

    bobj.b=10;
    cout<<"Show function call from base class\n";
    bobj.show();

    dobj.b=1;
    dobj.d=1;
    cout<<"Show function call from derived class\n";
    dobj.show();

    return 0;
}