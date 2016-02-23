//This program executes the while loop for the hello world

//preprocessor directive
#include <iostream>
using namespace std;

//main functions begins here
int main()
{
  //declare variables
  int counter = 1;
  
  //execute do while loop
  
    do {
		cout<<"Hello World!"<<endl;
		counter ++;
	}
	
    while(counter<=10);

  //terminate the program
  return 0;
  
}
