#include<iostream>
using namespace std;

//main function
int main ()
{ 
	//declare variables
	int code, quantity, totalcost, price;
	
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
	cout<<"Enter the quantity"<<endl;
	cin>>quantity;
	
	//create switch code
	switch(code)
		{
			case 1:
			cout<<"You have selected Hotdog"<<endl;
			price = 200;
			totalcost=price*quantity;
			cout<<"the total cost = "<<totalcost<<endl;
			break;
			
			case 2:
			cout<<"You have selected pizza"<<endl; 
			price = 700;
			totalcost=price*quantity;
			cout<<"the total cost = "<<totalcost<<endl;
			
			case 3:
			cout<<"You have selected Chips"<<endl; 
			price = 150;
			totalcost=price*quantity;
			cout<<"the total cost = "<<totalcost<<endl;
			break;
			
			case 4:
			cout<<"You have selected Chicken"<<endl; 
			price = 100;
			totalcost=price*quantity;//or you can input totalcost=100*quatity;
			cout<<"the total cost = "<<totalcost<<endl;
			break;
			
			default:
			cout<<"You code is neither 1, 2, 3 or 4"<<endl;
			break;
		}
		//terminate program
		return 0;

}
