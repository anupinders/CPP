#include<iostream>
#include <fstream>
#include<iomanip>

using namespace std;

int main()
{
    int info[4] = {1,2,3,4};
    ofstream writeData("binData");
    writeData.write((char *) &info, sizeof(info));
    writeData.close();
    int readinfo[4] = {0,0,0,0};
    ifstream readBin("binData");
    readBin.read((char *) &readinfo,sizeof(readinfo));
    for(int count=0;count<4;count++)
    {
        cout<<"VAlue at the index "<<count<<": "<<readinfo[count];
    }
    readBin.close();
    return 0;
}
