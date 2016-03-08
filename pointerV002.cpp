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
    cout<<"myPointer points to a value:"
    cout<<*myPointer<<endl;
    
    //print the address stored by myPointer
    cout<<"The address is "<<myPointer;
    
    
  };
