/*Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc*/
#include<iostream>
using namespace std;
class Area
{
    int s,l,b,r;
  public:
  void square()
  {
  cout<<"Enter The Side of The Square \n";
  cin>>s;
  int area = s*s;
  cout<<"Area Of The Square is-:"<<area;
  }
  void Rectangle()
  {
    cout<<"Enter The Length and Breadth Of The Rectangle-:\n";
    cin>>l>>b;
    int area = l*b;
    cout<<"Area Of The Rectangle is-:"<<area;
  }
  void Circle()
  {
    
  }
};