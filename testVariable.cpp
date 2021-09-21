#include <iostream>

using namespace std;

int value =9;//global 

int main()
{
    int value=10;//local to main()

    cout<<"Value of variable is:"<<::value<<"\n";


    // for(int count=0;count< 10;count+=2)
    // {
    //     int valueToPrint = 19;
    //     cout<<"Iteration No "<<count<<" - Value of the varibale valueToPrint:"<<valueToPrint<<endl;
    // }


    int count=0;
    while(count>10)
    {
        int valueToPrint = 19;
        cout<<"Iteration No "<<count<<" - Value of the varibale valueToPrint:"<<valueToPrint<<endl;
        count++;
    }



    do
    {
        int valueToPrint = 19;
        cout<<"\nIteration No "<<count<<" - Value of the varibale valueToPrint:"<<valueToPrint<<endl;
        count++;
    }while(count>10);



    return 0;
}