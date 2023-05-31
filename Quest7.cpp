/*Define a class Greatest and define instance member func to find Largest among
3 numbers using classes.*/
#include<iostream>
using namespace std;
class Greatest
{
     int a,b,c;
   public:
  void Enterval()
  {
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
  Greatest w1;
    w1.Enterval();
    return 0;
}
