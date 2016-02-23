#include <iostream>
using namespace std;
//main function
int main ()
{
	//declare variable
  int n;
  cout << "Enter the starting number > ";
  cin >> n;
   //execute while loop
  while (n>0)//condition
  {
    cout << n << ", ";//execute code
    --n;
  }

  cout << "FIRE!\n";//outstatement 
  //terminate the program
  return 0;
}
