#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char readline[30];

    ifstream readfile, readData;

    readfile.open("itemDetails"); 
    readData.open("DataItems");

    readfile.getline(readline,30);
    cout<<"---";
    readData.getline(readline,30);

    //while(readfile.eof())



}