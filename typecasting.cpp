/*
Size of different datatypes used
*/
#include <iostream>

using namespace std;


//this program is going to use two value and divide them to get a resulting integer
//both the variable/identifiers should be of integer type and the value range supported thie is going to be - 32k
// to +32K

float firstNo;
float secondNo;

float additionOperation(float,float);
float subtractionOperation(float,float);

float divisionOperation(float f, float s)//fuction/method/ member function
{
cout<<"Value in the firat variable: "<<firstNo;

    if(f==0)
    {
        cout<<"\nDenominetor cannot be 0";
        return 0;
    }
    float result = s/f;
    return result;
}


int main()
{

    

    cout<<"Let us know the denominator which should be in the range of -32768 to + 32767";
    cin>>firstNo;

    cout<<"Let us know the Numerator which should be in the range of -32768 to + 32767";
    cin>>secondNo;

    if(firstNo > 32767 || firstNo < -32768)
    {
        cout<<"Sorry your entry is wrong, please retry";
        return 1;
    }
    else if( secondNo > 32767 || secondNo < -32768)
    {
        cout<<"Sorry your entry is wrong, please retry";
    }
    else
    {
        int option=0;
        cout<<"What operation do you want to perform:\n\n";
        cout<<"Enter 1 for division\n\n";
        cout<<"Enter 2 for addition\n\n";
        cout<<"Enter 3 for sub\n";
        cin>>option;
        float result=0;

        switch(option)
        {
            case 1:
                result = divisionOperation(firstNo, secondNo);
                break;
            case 2:
                result = additionOperation(firstNo, secondNo);
                break;
            case 3:
                result = subtractionOperation(firstNo, secondNo);
                break;
            default:
                cout<<"You have entered a invalid values";
        }
        cout<<"The Result of operation added is: "<<result;
    }
    return 0;
}


float additionOperation(float f, float s)//fuction/method/ member function
{
    float result = s+f;
    return result;
}

//second no will be subratacted from the first no
float subtractionOperation(float f, float s)//fuction/method/ member function
{
    float result = s-f;
    return result;
}

