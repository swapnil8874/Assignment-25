//Def a class Rectangle and def. an instance member func to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
  int l,b;
  public:
  void AskUser()
  {
  cout<<"Enter the Value of Length and Breadth of a Rectangle\n";
  cin>>l>>b;
  }
  void CalculateArea()
  {
    int A;
    A = l*b;
    cout<<"Area of Rectangle is "<<A;
  }
};
int main()
{
    Rectangle r1;
    r1.AskUser();
    r1.CalculateArea();
    return 0;
}