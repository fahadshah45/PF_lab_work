# include <iostream>
using namespace std;
main ()
{
string name;
int a = 0;
int b = 0;
int c = 0;
int d = 0;

cout<<"Enter the name of the cricket team: ";
cin>>name;


cout<<"Enter the number of wins: ";
cin>>a;

cout<<"Enter the number of draws: ";
cin>>b;

cout<<"Enter the number of losses: ";
cin>>c;

d=(a*3)+b;

cout<<name<<" has obtained "<<d<<" points in the Asia Cup tournament.";

}