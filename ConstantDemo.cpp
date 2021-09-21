/*
Constant Demo
*/
#include <iostream>

using namespace std;


int main()
{
    float raduis = 12;
    const float pi = 3.14159;// make changes to one location

    float area = pi * raduis * raduis;
    cout<<"\nVAlue to be Area "<<area;
    //pi = 3.1458;

    area = pi * raduis * raduis;
    cout<<"\nVAlue to be are "<<area;
    return 0;
}