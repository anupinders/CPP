#include<iostream>

using namespace std;

inline int cube(int a)
{
    return a*a*a;
}

void show(void)
{
    cout<<"\nTest Print\n";
}

int main()
{
int varValue = 9;

int cubeValue = cube(varValue);

cout<<"Value of cube is: "<<cubeValue<<endl;
show();

return 0;
}