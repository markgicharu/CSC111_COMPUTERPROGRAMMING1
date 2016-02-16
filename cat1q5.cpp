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
  if(10<a)
    {
      cout<<"This number is too small"<<endl;
    }
  else 
  cout<<"This number is big enough"<<endl;
}
