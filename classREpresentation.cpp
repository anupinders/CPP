/*
Size of different datatypes used
*/
#include <iostream>

using namespace std;


//this program is going to use two value and divide them to get a resulting integer
//both the variable/identifiers should be of integer type and the value range supported thie is going to be - 32k
// to +32K


class Calculator
{
// public, private , protected
    float firstNo;
    float secondNo;

    public:
      Calculator()
      {

      }

        Calculator(float fNo, float sNo)//explicit
        {   
            firstNo=fNo;;
            secondNo=sNo;
        }

        Calculator(float sNo)//explicit
        {   
            //firstNo=0;
            secondNo=sNo;
        }

        float divisionOperation()//fuction/method/ member function
        {
            cout<<"Value in the firat variable: "<<firstNo;

                if(firstNo==0)
                {
                    cout<<"\nDenominetor cannot be 0";
                    return 0;
                }
                return secondNo/firstNo;
        }
        float additionOperation();
        float subtractionOperation();

        float firstNO()
        {
            return firstNo;
        }

        void setFirstNo(float value)
        {
            firstNo=value;
        }


};

float Calculator::additionOperation()
{
    return secondNo + firstNo;
}

float Calculator::subtractionOperation()
{
    return secondNo - firstNo;
}


int main()
{
    float firstNo;
    float secondNo;


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
        //Calculator harman(20,100);
        //Calculator harman(firstNo,secondNo);
        Calculator harman(secondNo);
        harman.setFirstNo(firstNo);

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
                result = harman.divisionOperation();
                break;
            case 2:
                result = harman.additionOperation();
                break;
            case 3:
                result = harman.subtractionOperation();
                break;
            default:
                cout<<"You have entered a invalid values";
        }
        cout<<"The Result of operation added is: "<<result;
    }
    return 0;
}
