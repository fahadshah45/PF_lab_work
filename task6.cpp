# include <iostream>
using namespace std;
main ()
{
double a = 0;
double b = 0;

cout<<"Enter the size in megabytes (MB): ";
cin>>a;

b=a*1024*1024*8;

cout<<a<<" MB is equivalent to "<<b<<" bits.";	
}