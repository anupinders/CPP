#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    /*int len = 15;
    int sno=0;
    char name[15];
    char LastName[15];

    cout<<"Hey share your name:";
    cin>>len>>sno>>name;
    cout<<"\nLenght variable"<<len;
    cout<<"\nSno258 variable"<<sno;
    cout<<"\nName Variable"<<name;
    */

    char *s1 = new char[15];
    strcpy(s1,"C plus plus");
    char *s2 = new char[15];
    strcpy(s2,"Harman Training Track");
    
    int lenS1 = strlen(s1);
    int lenS2 = strlen(s2);

    cout<<"*************";
    cout.write(s1,lenS1);
    cout.write(s2,lenS2);
    cout<<"*************";
    
    while(lenS1>=1)
    {
        cout.width(20);
        cout.fill('*');
        cout.write(s1,lenS1);
        cout<<"\n";
        lenS1--;
    }

    /* while(lenS2>=1)
    {
        cout.write(s2,lenS2);
        cout<<"\n";
        lenS2--;
    }*/

    return 0;
}