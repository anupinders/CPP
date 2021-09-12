/*
Program is to print a math table by taking input from the user
Author: Ashin
Date Create: Sept 02, 2021
Last updated on: Sept 13, 2021

comments: Some additional libray is used
*/

#include<iostream>

using namespace std;

int main()
{
	//camelcase  ..... studentAttendance, firstName   .../// Local Varibale
    //pascal case ..... StudentName, FirstName  ... /// Global varibale,Classes, Interface, Abstract Classe/Functions

    //Constant/Static variable ..... INTEREST_RATE

    //print any math table

    int number_Table;// The varible is of 4 byte

    cout<<"Hey, Tell me which table you want to print: ";// console output
    cin>>number_Table;


    //Algo for printing the table upto 10 multiplications
    for(int countVar=1;countVar<=10;countVar++)
    {

        cout<<number_Table<<" x "<<countVar<<" = "<<(number_Table*countVar)<<endl;// Buffer clearing at the end of each print
        //cout<<"\n";
    }
	
}