#include <iostream>
using namespace std;
//mainfunction

int main()
{
  //declare variables
  double x,y,z,s,a,p;
  //prompt user input
  cout<<"Please enter a number"<<endl;
  cin>>x;
  cout<<"Please enter another number?"<<endl;
  cin>>y;
  cout<<"Please enter a final number?"<<endl;
  cin>>z;
  //compute
  s=x+y+z;
  a=s/3;
  p=x*y*z;
  
  //terminate program
  return 0;
}
