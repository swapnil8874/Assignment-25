//Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.
#include<iostream>
using namespace std;
class Factorial
{
   int n,fact;
   public: 
   void setVal()
   {
    int a;
    cout<<"Enter The value whom you want to Know Factorial\n";
    cin>>a;
    n=a;
   }
   void printfact()
   {
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    fact=f;
      cout<<"Value of Factorial if "<<fact<<endl;
   }
};
int main()
{
    Factorial f1;
    //cout<<"Factorial of"<< f1.setVal()<<"is"<<f1.printfact()<<endl;
    f1.setVal();
    f1.printfact();
    return 0;
}

