#include<iostream>

using namespace std;

class Product
{
    int productprice;
    public:
          Product(void)
          {
              productprice=0;
          }
          Product(int Price)
          {
              productprice=Price;
          }
        void printprice();
};

