#include<iostream>

using namespace std;

void show(void);
int add(int, int);//add functions are right now overloaded
float add(float fno =87.9, float sno=25.8);

const int g_testValue = 12;

int main()
{
  
    //pointers
    cout<<"\n\nValue of Global Variable is: "<<g_testValue<<" and the memory address of the variable is: "<<&g_testValue;

    //cout<<"\n\n memory location provided to the literel integer contant is "<<&(51.12);

    float result = add((float) g_testValue, (float)51.5);

    return 0;
}


float add(float fNo, float sNo)
{
    cout<<"\n\nValue of Fno is: "<<fNo<<" and the memory address of the fNo is: "<<&fNo;

    fNo += 1; //fno=fno+1;
    cout<<"\n\nthe call is for flaot "<<fNo +sNo<<endl;
    return fNo +sNo;
}


int add(int fNo, int sNo)//the no instructions should be small for the inline function
{
    return fNo +sNo;
}
