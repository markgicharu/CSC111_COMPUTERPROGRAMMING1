//preprocessor directive
#include<iostream>
using namespace std;

//main function
int main()
{
	//declare variables
	double q,m,f,Grand_Total,a;

	//prompt user for input grades
	cout<<"Please enter the quiz grade"<<endl;
	cin>>q;
	cout<<"Please enter the midterm grade"<<endl;
	cin>>m;
	cout<<"Please enter the final grade"<<endl;
	cin>>f;
 //compute the grand total
	Grand_Total=q+m+f;
	a=Grand_Total/500*100;

 //condition for grade statement enters here
	if(a>=80&&a<=100)
	{
      cout<<"your Average Grade is A"<<endl;
	}
}
