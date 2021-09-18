#include<iostream>
using namespace std;

int sumar( )
{	
	int a,b,c;
	
	cout<<"Ingrese valor de a: ";
	cin>>a;
	
	cout<<"Ingrese valor de b: ";
	cin>>b;	
	
	c = a + b;
	
	return c;

}

int main()
{	
	int sum;
	
	sum = sumar( );
	
	cout<<"Valor de la suma de a y b:  ";
	cout<<sum;
	
	return 0;
}



