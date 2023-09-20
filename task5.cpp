# include <iostream>
using namespace std;
main ()
{
string name;
float b;
float c;
float d;
float e;

cout<<"Enter the student's name: ";
cin>>name;

cout<<"Enter matriculation marks (out of 1100): ";
cin>>b;

cout<<"Enter intermediate marks (out of 550): ";
cin>>c;

cout<<"Enter ECAT marks (out of 400): ";
cin>>d;

e=(b/1100*10)+(c/550*40)+(d/400*50);

cout<<"Aggregate score for "<<name<<" in UET is: "<<e<<"%";


}