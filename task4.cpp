# include <iostream>
using namespace std;
main ()
{
float a = 0;
float b = 0;
float c = 0;

cout<<"Enter the charge (Q) in Coulombs: ";
cin>>a;

cout<<"Enter the time (t) in seconds: ";
cin>>b;

c=a/b;

cout<<"The current (I) is: "<<c<<" Amperes";
}