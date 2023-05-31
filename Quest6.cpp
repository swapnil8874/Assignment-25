//Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
    private:
  int n;
    public:
    void input();
};
void Square::input()
{
    cout<<"Enter The value\n";
    cin>>n;
    int y = n*n;
    cout<<"The square of "<< n <<" is "<<y;
}
int main()
{
  Square s1;
  s1.input();
  return 0;
}
