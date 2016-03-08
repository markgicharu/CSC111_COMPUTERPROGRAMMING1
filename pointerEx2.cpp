#include<iostream>
using namespace std;

//main function begins here
int main ()
{
	//declare variable
	int firstvalue, secondvalue;
	//declare pointer
	int * mypointer;
	//reference pointer to address of variable firstvalue
	mypointer = &firstvalue;
	//assign pointer a value
	*mypointer = 10;
	//reference pointer to address of variable secondvalue
	mypointer = &secondvalue;
	//assign pointer to a value
	*mypointer = 30;
	//output the value of variable firstvalue
	cout << "firstvalue is " << firstvalue << '\n';
	//output the value of variable secondvalue
	cout << "secondvalue is " << secondvalue << '\n';
	//terminate the program
	return 0;
}
