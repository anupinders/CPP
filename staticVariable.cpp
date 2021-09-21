/*Static varibale*/

#include<iostream>


using namespace std;

class product
{
    int productCode;

    public:
    static int objcount;

    product(void)
    {
        productCode=0;
        objcount++;
    }

    ~product()
    {
        cout<<"\nThe object is deleted as instructed!";
        objcount--;
    }
    static void displayObjectCount()
    {
        cout<<"\nStatic Function call from class name itself:: ";
        cout<<"Total Object existing till now are:"<<objcount<<endl;
    }


};

int product::objcount;// initialize the static variable

int main()
{
    product p1;
   
    product::displayObjectCount();
   
    product p2;
    product::displayObjectCount();
    product *p3 = new product();
    product::displayObjectCount();

    //product *p4 = (product *)malloc(sizeof(product));

    delete p3;

    //free(p4);

    product::displayObjectCount();

}