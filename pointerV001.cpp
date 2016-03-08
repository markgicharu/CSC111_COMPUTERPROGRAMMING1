#include <iostream>
using namespace std;

int main()
{
    int i = 7;
	int j = 11;
	int *p = & i; // set p to point to i
	int *q = & j; // set q to point to j
	*p = *p + 3; 
	cout<<i<<endl;// i now has the value 10

    return 0;
}
