//Define a class LargestNumber and define an instance member fun to find the
//Largest of three Numbers using the class
#include<iostream>
using namespace std;
class LargestNumber
{
    public:
  void Enterval()
  {
    int a,b,c;
    cout<<"Enter The Three Digits \n";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"A is The Largest of Them\n";
    }
    else if(b>a && b>c)
    {
        cout<<"B is The Largest of Them\n";
    }
    else
    {
        cout<<"C is The Largest of Them\n";
    }
  }

};
int main()
{
    LargestNumber l1;
    l1.Enterval();
    return 0;
}