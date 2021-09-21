#include<iostream>
#include<cstring>

using namespace std;

class A1{
    //char str;//one character into the variable , where as 
    char *str;// you dynamically provide the length of the character variable
    string s;
    public:
        A1()
        {
            //str = new char[10];
        }

        void setStr(const char* p)// logic for setting up the dynamic length of a particular char pointer variable
        {
            int len = strlen(p);
            str = new char[len+1];
            strcpy(str, p);
        }

        void setS(const string p)// logic for setting up the dynamic length of a particular char pointer variable
        {
            s=p;
            //strcpy(s, p);
        }
        void print()
        {
            cout<<"Value of the char:"<<str;
        }

};


int main()
{
    A1 s;
    s.setStr("test name");
    s.print();
    return 0;
}