#include<iostream>
using namespace std;

void sumar(int a, int b)
{  
	int c;

	c = a + b;

	cout<<c;

}

int main()
{ 
	int a,b;
	  
	cout<<"Ingrese valor de a: \t";    
	cin>>a;
	
	cout<<"Ingrese valor de b: \t";    
	cin>>b;
	
	sumar(a,b);

	return 0;
} 



