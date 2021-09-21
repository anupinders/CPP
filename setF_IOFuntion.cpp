#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

int main()
{
    float value = 200.36356;
    
    // cout.setf(ios::right,ios::adjustfield);
    // cout.setf(ios::left,ios::adjustfield);
    cout.setf(ios::internal,ios::adjustfield);

    cout.setf(ios::fixed,ios::floatfield);
    //cout.setf(ios::scientific,ios::floatfield);

    // cout.setf(ios::hex,ios::basefield);
    // cout.setf(ios::oct,ios::basefield);
    // cout.setf(ios::dec,ios::basefield);
    //cout.fill('_');
    // cout.width(10);
    // cout.precision(3);
    // cout<<value;
    
    // cout.width(10);
    // cout<<setw(200)<<256.25876;
    // cout<<"\n";
    // cout<<256.25876;
    cout<<"\n";
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::scientific)<<256.25876<<endl;

    
    
    return 0;
}