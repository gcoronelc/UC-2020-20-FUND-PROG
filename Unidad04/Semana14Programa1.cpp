#include <iostream>
using namespace std;

int factorial(int n)
{   
	if (n == 0) 
       return 1;
    else 
      return n*factorial(n-1);
}

int main( )
{  
	int num, F;
   
    do{
	    cout<<"Ingrese numero para factorial: ";
	    cin>>num;
   	}while(num<0);
  
	F = factorial(num);

 	cout<<"El factorial es: " << F; 
 
 	return 0;
}



