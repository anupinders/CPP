#include<iostream>

using namespace std;

class test
{
    int varValue;

    public:
        test()
        {
            varValue=0;
        }

        test(test & t)
        {
            cout<<"\nInside the explicit Copy consturctor";
            varValue=t.varValue;
        }

        void setvarValue(int value)
        {
            varValue=value;
        }
        int getvarValue()
        {
            return varValue;
        }

        ~test()
        {
            cout<<"\nThe object is destroyed";
        }

};


int main()
{
    test t;
    t.setvarValue(2);
    cout<<"Value of the object t: "<<t.getvarValue();
    
    {
        test t1=t;
        cout<<"\n\nValue of the object t1: "<<t1.getvarValue();
    }

    test t2(t);
    cout<<"\n\nValue of the object t2: "<<t2.getvarValue();
}