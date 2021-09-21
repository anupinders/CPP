#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    float value = 200.36356;
    //cout.width(50);
    cout<<"Descrition of Items";
    cout.width(20);
    cout<<"Qunatity";
    cout.width(20);
    cout<<"Base Price";
    cout.width(30);
    cout<<"Item Total";
    cout<<"\n";
    cout.setf(ios::right,ios::adjustfield);
    cout.width(19);
    cout.fill('_');
    cout<<"TV";
    cout.width(20);
    cout.fill(' ');
    cout<<"2";
    cout.width(20);
    cout.precision(7);
    cout.fill('*');
    cout<<value;
    cout.width(30);
    cout.fill(' ');
    cout<<"400";
    cout<<"\n";
    cout.unsetf(ios::adjustfield);
    cout.width(19);
    cout<<"VCR";
    cout.width(20);
    cout<<"3";
    cout.width(20);
    cout<<"100";
    cout.width(30);
    cout<<"300";

    return 0;
}