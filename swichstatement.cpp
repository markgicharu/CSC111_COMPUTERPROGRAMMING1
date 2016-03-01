#include <iostream>
using namespace std;

//main functions begins here
int main()
{
  //declare variables
  int age;
  char gender;
  
  //display the menu
  //display the menu
	//cout<<"\t\t MENU"<<endl;
	cout<<"age \t  Gender \t Activity \n";
	cout<<"3 \t \t female \t computer games \n";
	cout<<"4 \t \t male \t  computer games \n";
	cout<<"5 \t \t Chips \t  150 \n";
	cout<<"6 \t \t Chicken \t 100 \n";
	cout<<"7 \t \t Chicken \t 100 \n";
	cout<<"8 \t \t Chicken \t 100 \n";
  
  //prompt user input
  cout<<"Please enter a valid age between 0 and 8 years old"<<endl;
  cin>>age;
  cout<<"Please enter the gender/sex of the child"<<endl;
  cin>>gender;
  
  //generate switch statement
  switch(age)
  {
    case 3:
    cout<<"The age of the child is "<<age<<"the sex of the child is "<<gender<<endl;
    break;
    
    case 4:
    cout<<"The age of the child is "<<age<<"the sex of the child is "<<gender<<endl;
    break;
    
    case 5:
    cout<<"The age of the child is "<<age<<"the sex of the child is "<<gender<<endl;
    break;
    
    case 6:
    cout<<"The age of the child is "<<age<<"the sex of the child is "<<gender<<endl;
    break;
    
    case 7:
    cout<<"The age of the child is "<<age<<"the sex of the child is "<<gender<<endl;
    break;
    
    case 8:
    cout<<"The age of the child is "<<age<<"the sex of the child is "<<gender<<endl;
    break;
    
    
  }
}
