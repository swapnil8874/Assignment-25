//Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member fun to set values of complex num and print values of complex number
#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
void setVal()
{
    int x,y;
    cout<<"Enter The value of Real and Imaginary part\n";
    cin>>x>>y;
    a=x;
    b=y;
}
void printval()
{
    cout<<endl<<"Real = "<<a<<" Imaginary = "<<b<<endl;
    cout<<a<<"+"<<b<<"i";
}
};
int main()
{
    Complex f;
    f.setVal();
    f.printval();
    return 0;
}