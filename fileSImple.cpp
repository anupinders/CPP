#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
    
    char *productName = new char[20];
    int price;

    ofstream writeFile("ItemDetails");
   int count=0;
    while(count<4){

        cout<<"Enter the Product Name"<<endl;
        cin.ignore();//this is used to ignore or clear one or more characters from the input buffer.
        cin.getline(productName,20);
        cout<<"Enter the Cost of the product:"<<endl;
        cin>>price;
        writeFile<<productName<<"   ";
        writeFile<<price;
        writeFile<<"\n";
        count++;
    }

    writeFile.close();

    ifstream readFile("ItemDetails");

    readFile>>productName;
    readFile>>price;
    cout<<"\n\nValues Fetched from the file, Product Name: "<<productName<<" and the price: "<<price;
    readFile.close();
    return 0;
}
