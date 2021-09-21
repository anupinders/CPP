#include<iostream>
#include<cstring>

using namespace std;

class A{

    char *p;
    int len;
    void printStr()
        {
            cout<<"The string is::::>>"<<p;
        }
    public:
        A(const char *t)
        {   
            len = strlen(t);
            p= new char[len+1];
            strcpy(p,t);
        }

        char * getString()
        {
            return p;
        }
        
};


class B:public A
{
    public:
        B(const char * c):A(c)
        {
            
        }
        void printStr()
        {
            cout<<"From BaseClass>>>> "<<getString();
            //A::printStr();
        }
};


int main()
{

    B s("This is a test message");
    s.printStr();
    return 0;
}