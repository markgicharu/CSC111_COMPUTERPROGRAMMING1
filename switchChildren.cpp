#include <iostream>
using namespace std;

//main functions begins here
int main()
{
  //declare variables
  int age;
  char gender;
  
  //prompt user input
  cout<<"Please enter a valid age between 0 and 8 years old"<<endl;
  cin>>age;
  cout<<"Please enter the gender/sex of the child"<<endl;
  cin>>gender;
  
  //generate switch statement
  switch(age)
  {
    case age:
    cout<<"The age of the child is "<<age<<"the sex of the child is "<<gender<<endl;
    break;
    
  }
}
