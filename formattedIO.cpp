#include<iostream>

using namespace std;

int main()
{

    float result = 3.14159;
    cout.precision(3);
    //cout.fill('*');
    cout.width(5);
    //cout<<result;
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(10);
    cout<<result;

    return 0;
}