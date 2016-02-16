//preprocessor directive
# include <iostream>
using namespace std;

//mainfunction begins here
int main()
{
  //declare variables
  int a,b,c;
  //execution begins here
  
  //prompt user input
  cout<<"please enter the first number"<<endl;
  cin>>a;
  cout<<"please enter the second number"<<endl;
  cin>>b;
  cout<<"please enter the third number"<<endl;
  cin>>c;
  
  //begin comparison function
  if(a>b&&a>c)
  {
    cout<<"the maximum number you have entered is "<<a<<endl;
  }
  else 
  if(b>a&&b>c)
  {
    cout<<"the maximum number you have entered is "<<b<<endl;
  }
  else 
  {
    cout<<"the maximum number you have entered is "<<c<<endl;
  }
  return 0;
}
