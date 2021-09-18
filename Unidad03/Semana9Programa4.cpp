#include<iostream>
using namespace std;

int sumar(int a, int b)
{	
	int c;
	c = a + b;
	return c;
}

int main()
{	
	int a, b, sum;
	
	cout<<"Ingrese valor de a: ";
	cin>>a;
	
	cout<<"Ingrese valor de b: ";
	cin>>b;	
	
	sum = sumar(a,b);
	
	cout<<"Valor de la suma de a y b:  ";
	cout<<sum;
	
	return 0;
}



