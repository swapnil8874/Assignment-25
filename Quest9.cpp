//Def a class Circle and define an instance member func to find the area of the circle
#include<iostream>
using namespace std;
class Circle
{
  float r;
  public:
  void Setradius()
  {
    cout<<"Enter The Radius of Circle\n";
    cin>>r; 
  }
  void Area()
  {
    float A = 3.14*r*r;
    cout<<"Area of a Circle is "<<A;

  }
};
int main()
{
    Circle s1;
    s1.Setradius();
    s1.Area();
    return 0;

}