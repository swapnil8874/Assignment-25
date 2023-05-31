//Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//number of instance member variables and also define instance member functions to
//set values for time and display values of time
#include<iostream>
using namespace std;
class Time{
    private:
 int a,b,c;
 public:
 void setTime()
 {
   int x,y,z;
   cout<<"Enter The value of Hours,Minute and Seconds\n";
   cin>>x>>y>>z;
    a=x;
    b=y;
    c=z;
 }
 void print()
 {
    cout<<a<<" Hours "<<b<<" Minute "<<c<<" Second"<<endl;
 }
};
int main()
{
    Time t;
    t.setTime();
    t.print();
    return 0;
}