#include<iostream>
#include <cstring>

using namespace std;

struct product
{
    private:
        char* productName;
        int weight;
        double price;

    public:
    
    void setWeigh(int value)
    {
        weight = value;
    }

    void setPrice(int value)
    {
        price = value;
    }

    void setProductName(char *t)
    {
        int len=strlen(t);
        productName =  new char[len];
        strcpy(productName,t);
    }

    void printValues()
        {
            cout<<"From Structure:  Product weight: "<<weight<<" Product price: "<<price<<" and Product Name: "<<productName;
        }
} p1;


int main()
{
    //product *p2;
    product *p2 = new product;
    //(product *) malloc(sizeof(product));

    p1.setProductName("Product1");
    p1.setWeigh(100);
    p1.setPrice(200);

    p1.printValues();

    //cout<<"\n\nProduct weight: "<<p1.weight<<" Product price: "<<p1.price;

    cout<<"\n\n Following is a ponter structure notation implementation";

    (*p2).setProductName("Product2");
    (*p2).setWeigh(200);
    p2->setPrice(500);
    (*p2).printValues();

    delete p2;


    return 0;
}