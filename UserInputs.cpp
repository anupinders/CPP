/*
Write a program to read the values of a,b,and c and display the value of x where
            x= a/b-c

test your program for the following values:
(a) a=250, b = 85, c=25
(b) a=300, b=70, c=70

*/

#include<iostream>

using namespace std;

int main()
{

    float a,b,c;
    float x;

    cout<<"Enter the values for a,b,c: ";

    cin>>a>>b>>c;

    x=a/b-c;
cout.precision(4);
    cout<<"Value of x after resolving the expression a/b-c: "<<x; 

    return 0;
}