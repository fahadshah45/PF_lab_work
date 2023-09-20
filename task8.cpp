# include <iostream>
using namespace std;
main ()
{
float a = 0;
float b = 0;
float c = 0;

cout<<"Enter voltage (in volts): ";
cin>>a;
cout<<"Enter current (in amperes): ";
cin>>b;

c=a*b;

cout<<"The power is "<<c<<" watts.";
}