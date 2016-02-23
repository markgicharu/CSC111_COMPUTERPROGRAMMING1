#include<iostream>
using namespace std;

//main function
int main ()
{ 
	//declare variables
	int code;
	
	//display the menu
	cout<<"\t\t MENU"<<endl;
	cout<<"code \t Item \t Price\n";
	cout<<"1 \t \t Hotdog \t 200 \n";
	cout<<"2 \t \t Pizza \t  700 \n";
	cout<<"3 \t \t Chips \t  150 \n";
	cout<<"4 \t \t Chicken \t 100 \n";
	
	//prompt user for input
	cout<<"Kindly enter a menu code"<<endl;
	cin>>code;
	
	//create switch code
	switch(code)
		{
			case 1:
			cout<<"You have selected Hotdog costing Kshs. 200";
			break;
			
			case 2:
			cout<<"You have selected pizza costing Kshs. 700";
			break;
			
			case 3:
			cout<<"You have selected Chips costing Kshs. 150";
			break;
			
			case 4:
			cout<<"You have selected Chicken costing Kshs. 100";
			break;
			
			default:
			cout<<"You code is neither 1, 2, 3 or 4"<<endl;
			break;
		}
		//terminate program
		return 0;

}
