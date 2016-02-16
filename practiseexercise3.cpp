//preprocessor directive
# include <iostream>
using namespace std;
//main function begins here
int main()
{
  //declare variables
  int a;
  //execute
  //prompt user input
  cout<<"Enter an integer below"<<endl;
  cin>>a;
  
  //runtime condition
  if(a<10)
    {
      cout<<"This number is too small"<<endl;
    }
  else 
	  if(a>=10)
  cout<<"This number is big enough"<<endl;
  
  //end program
  return 0;
}
