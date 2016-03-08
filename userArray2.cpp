#include <iostream>
using namespace std;

int main()
{
	// We know that we need a constant number of elements
	const int max = 10;
	int number[max];
	
	// We will calculate their sum
	int sum = 0;

	cout << "Please type 10 integers.\n";

	for( int i = 0; i < max; i++ )
	{
		cout << "Number " << i + 1 << ": ";
		cin >> number[i];
		sum += number[i];
	}

	cout << "\n\nThe sum of these numbers is " << Sum << "\n\n";

	return 0;
}

http://www.functionx.com/cpp/Lesson12.htm
