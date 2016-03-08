#include <iostream>
using namespace std;

int main()
{
	const int counter = 5;
	int page[counter];

	cout << "Enter the number of pages of your books\n";
	cout << "Book 1: ";
	cin >> page[0];
	cout << "Book 4: ";
	cin >> page[3];

	cout << "\nSummary of books";
	cout << "\nBook 1: " << page[0] << " pages";
	cout << "\nBook 4: " << page[3] << " pages\n";

	return 0;
}
