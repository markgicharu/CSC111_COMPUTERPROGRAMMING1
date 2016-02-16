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
	else 
		if(a>=60&&a<=79)
	{
      cout<<"your Average Grade is B"<<endl;
	}
	else 
		if(a>=50&&a<=69)
	{
      cout<<"your Average Grade is C"<<endl;
	}
	else 
		if(a>=0&&a<=50)
	{
      cout<<"your Average Grade is F"<<endl;
	}

		//terminate entire program
}
