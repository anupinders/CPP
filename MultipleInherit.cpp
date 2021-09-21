#include<iostream>

using namespace std;

class B{
    public:
    B()
    {
        cout<<"Inside the B Class construtor"<<endl;
    }
        int publicVar;
    private:
        int privateVar;
    protected:
        int protectedVar;
};

//
class D{
    public:
        int derivedVar1;
        D()
        {
            cout<<"Inside the D Class construtor"<<endl;
            derivedVar1=19;
        }
      
        void printValues(){
            cout<<"The value of protectedVar:"<<derivedVar1;
        }
};

class C:  D, public B {

    public:
        C()
        {
            derivedVar1=900;
            cout<<"Inside the C Class construtor"<<endl;
        }
        void printAlltheFeaturesInherite()
        {
            cout<<"Inside the C Derived Class"<<endl;
            cout<<"The value of publicVar:"<<publicVar<<endl;
            cout<<"The value of protectedVar:"<<protectedVar<<endl;
            cout<<"The value of protectedVar:"<<derivedVar1;
        }

};

int main()
{
    //B bobj;
    //D dobj;

    //dobj.derivedVar1;
    // dobj.setPublicValue(27);
    // cout<<"Value of Publicvar after accessing it through the derived class obbject:"<<dobj.getPublicVar()<<endl;
    // dobj.setPublicValue(28);
    // dobj.setprotectedVar(128);
    // dobj.printValues();

    C newObject;
    
    //newObject.derivedVar1 = 0;
    newObject.printAlltheFeaturesInherite();

    return 0;
}