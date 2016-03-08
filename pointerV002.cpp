#include<iostream>
using namespace std;

int main()
  {
    //declaring variables
    int x = 10;
    int y = 200;
    
    //declaring pi=ointers
    
    int myPointer;
    
    //initializing  a pointer
    myPointer = &y; // pointer points to variable y
    
    //print values printed by myPointer
    cout<<"myPointer points to a value: ";
    cout<<*myPointer<<endl;
    
    //print the address stored by myPointer
    cout<<"The address is "<<myPointer;
    
    //using dereference pointer as a value
    *myPointer = 600; //reassinging value pointed to bymyPointer
    
    cout<<"The value of y = "<<y;
    cout<<"\n or"<<*myPointer<<endl;
    
    //display the address of variable x and y
    cout<<"the address of x is "<<&x;
    cout<<"\n address of y is "<<myPointer<<endl;
    
  };
