//preprocessor directive
#include <iostream>
using namespace std;

//mainfunction begins here
int main ()
  {
    //declare array variables
    int arr[10];
	//request user input
    cout<< "Please enter 10 integers: "<<endl;
    
    //for loop begins here for storing integers
    for(int i=0; i< 10; i++)
    {
      cout<<"Element "<<i+1<<"=";
      cin>> arr[i];
     
    }
    //Accessing the 10 integers and displaying the input values
    cout<<"Values in array are now:\n ";
    for (int i=0; i< 10; i++ )
    {
      cout<< arr[i]<<", ";
	  //cout<<endl;
    }
    
    return 0;
   
  }
