#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream writeFile;
    writeFile.open("itemDetails");
    writeFile<<"This is a text line 1\n";
    writeFile<<"This is a text line 2\n";
    writeFile<<"This is a text line 3\n";
    writeFile.close();
    ofstream writeData("DataItems");
    writeData<<"This is a Data line 1\n";
    writeData<<"This is a Data line 2\n";
    writeData<<"This is a Data line 3\n";
    writeData.close();

    char readLine[30];
    ifstream readfile, readData;

    ofstream writeTheFile("NewFile");
    readfile.open("itemDetails");
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>";
    while(readfile)
    {
        readfile.getline(readLine,30);
        //cout<<"\n"<<readLine;       
        writeTheFile<<readLine;
        writeTheFile<<"\n";
    }

    readData.open("DataItems");
    cout<<"+++++++++++++++++++++\n";
    while(readData)
    {
        readData.getline(readLine,30);
        cout<<"\n"<<readLine;       
        
    }
}