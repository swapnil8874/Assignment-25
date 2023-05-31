//Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class
#include<iostream>
using namespace std;
class ReverseNumber
{
   int n;
   public:
   void input()
   {
    cout<<"Enter The Digits\n";
    cin>>n;    
   }
   void Reverse()
   {
    int rev=0,a;
    while(n>0)
    {
    a = n%10;
    rev = (rev*10) + a;
    n = n/10;
    }
    cout<<"Reverse Number is -:"<<rev;
   }
};
int main()
{
    ReverseNumber r1;
    r1.input();
    r1.Reverse();
    return 0;
}