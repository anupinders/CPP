#include<iostream>
#include<fstream>
#include<iomanip>


using namespace std;

int main()
{
    char readline[30];

    fstream writeFile;

    writeFile.open("itemDetails",ios::in | ios::out); 
    /*
        ios::app --- append
        ios::ate --- go to the end of the file
        ios::binary --- binary files 
        ios::in  --- file is to be opend for the reading purpose
        ios::out  -- write the file 
        ios::nocreate -- 
        ios::noreplace -- if the file exist do not create and fail the file open for the writing
        ios::trunc  -- intensionally remove the content of the file
    */
    int count = 0;
    while(1)
    {

        writeFile<<"\n";
        writeFile<<"This is the  Content truncate flag "<<count;
        writeFile<<"\n";
        count++;
        if(count>10)
        {
            break;
        }
    }

    writeFile.seekg(0,ios::beg);

    cout<<"\nStart Readubg the file\n";
    char t[80];
    while(writeFile)
    {
        writeFile.getline(t,80);
        cout<<t<<"\n";
    }
    writeFile.close();
}