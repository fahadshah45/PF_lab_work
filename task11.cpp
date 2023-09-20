# include <iostream>
using namespace std;
main ()
{
int a = 0;
int b = 0;
int c = 0;


cout<<"Enter the current world population: ";
cin>>a;


cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>b;


c=a+((b*12)*30);

cout<<"The population in three decades will be: "<<c;

}