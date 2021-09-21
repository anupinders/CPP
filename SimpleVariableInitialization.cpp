/*
Size of different datatypes used
*/
#include <iostream>

using namespace std;

int main()
{
    int integerVar = 0;
    short int shortIntegerVar = 32769;
    unsigned int unsignedIntegerVar = 0;

    long longVar=0;
    long long longLongVar =0;

    float floatVar=0;
    double doubleVar = 0;

    char charVar='0';
    string stringVar="This is a test String";

    cout<<"\n Simple signed integer:"<<integerVar<<" and its size is:"<<sizeof(integerVar);
    cout<<"\n Simple signed shortIntegerVar:"<<shortIntegerVar<<" and its size is:"<<sizeof(shortIntegerVar);
    cout<<"\n Simple unsigned unsignedIntegerVar:"<<unsignedIntegerVar<<" and its size is:"<<sizeof(unsignedIntegerVar);

    cout<<"\n Simple Long:"<<longVar<<" and its size is:"<<sizeof(longVar);
    cout<<"\n Simple longLongVar:"<<longLongVar<<" and its size is:"<<sizeof(longLongVar);

    cout<<"\n Simple floatVar:"<<floatVar<<" and its size is:"<<sizeof(floatVar);
    cout<<"\n Simple doubleVar:"<<doubleVar<<" and its size is:"<<sizeof(doubleVar);
    
    cout<<"\n Simple charVar:"<<charVar<<" and its size is:"<<sizeof(charVar);
    cout<<"\n Simple charVar: "<<stringVar<<" and its size is:"<<sizeof(stringVar);


    return 0;
}