#include<iostream>
using namespace std;


class complex{
    //private variables 
    float real;
    float imaginary;

    //public members
    public:
    //constructor to intialze the data members 
        complex()
        {
            real=0;
            imaginary=0;
        }

        complex(float r, float i)
        {
            real=r;
            imaginary=i;
        }

        //accessor fucnctions
        float getReal()
        {
            return this->real;
        }
        float getImaginary()
        {
            return this->imaginary;
        }


        // performing the add operation of the current object using the this pointer
        //and storing the final outcome on the current object itself
        void add(complex valueToAdd)
        {
            this->real += valueToAdd.real;
            this->imaginary +=valueToAdd.imaginary; 
        }

        void add(complex *valueToAdd)
        {
            this->real += valueToAdd->real;
            this->imaginary +=valueToAdd->imaginary; 
        }

        //display the values on the console.
        void printValues()
        {
            cout<<"the current REAL: "<<real<<" and Imaginary Values are: "<<imaginary<<"\n";
        }

        friend complex operator+(complex c1, complex c2);
        friend complex operator+(complex c1, float value);
        friend complex operator+(float value, complex c1);
};

complex operator+(complex c1, complex c2)// objects as arguments to the addition fucntion
{
    complex result;
    result.real= c1.real +c2.real;
    result.imaginary= c1.imaginary +c2.imaginary;
    return result;
}

complex operator+(complex c1, float value)// objects as arguments to the addition fucntion
{
    complex result;
    result.real= c1.real + value;
    result.imaginary= c1.imaginary + value;
    return result;
}
complex operator+(float value,complex c1)// objects as arguments to the addition fucntion
{
    complex result;
    result.real= c1.real + value;
    result.imaginary= c1.imaginary + value;
    return result;
}


// main driver code for complex number add operation
int main()
{
    complex c1((float) 30.0, (float)40.0);
    complex c2((float) 130.0, (float)140.0);
    complex c3 = c1+c2;
    complex c4 = c1+2;
    complex c5 = 20+c1;
    cout<<"\nC3\n";
    c3.printValues();
    cout<<"\nC4\n";
    c4.printValues();
    cout<<"\nC5\n";
    c5.printValues();
}