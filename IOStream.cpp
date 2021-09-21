#include<iostream>
using namespace std;

int main()
{
    //char *c= new char[20];
    //cin>>c;
    //cout<<c;

    char c;
    cin.get(c);
    // when working with the unformatted stream... 
    // the stream reading only starts when you hit enter on the keyboard
    while(c!='\n')
    {
        cout.put(c);// print the character read previously and
        cin.get(c);// to read the next character in the stream to display on the console.
    }

    return 0;
}