#include <iostream>
using namespace std;

int main()
{
	const int numberOfItems = 5;
	double distance[numberOfItems] = {44.14, 720.52, 96.08, 468.78, 6.28};

	cout << "Members of the array\n";
	for(int i = 0; i < numberOfItems; ++i)
		cout << "Distance " << i + 1 << ": " << distance[i] << endl;

	return 0;
}
