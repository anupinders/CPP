#include<iostream>
using namespace std;
// interface, provide us the basic skeleton for the drived classes, so that all the methods are
// implemented for their respective features;
class Base{
    public:
    int b;
    virtual void show()=0;
    virtual void display()=0;
    
};


class Derived:public Base{
    public:
        int d;
        void show(){//overridding functionality of inheritance
            //Base::show();
            cout<<"Show() Derived Class\n";
            cout<<"b = "<<b<<"\n"<<"d = "<<d<<"\n";
        }
        virtual void display()=0;
        // {
        //     cout<<"\ndisplay Function Defined!!";
        // }
};

class finalDerived: public Derived{

    public:
        void display()
        {
            cout<<"\ndisplay Function Defined!!";
        }
};

int main()
{
    //Base bObj;
    //Derived o;
    //o.display();
    finalDerived dobj;
    dobj.b=2;
    dobj.d=9;
    dobj.show();
    dobj.display();

}