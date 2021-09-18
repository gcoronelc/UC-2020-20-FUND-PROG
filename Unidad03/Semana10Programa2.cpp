#include<iostream>
using namespace std;

int leedatoe()
{
	int dato;
	
	cin>>dato;
	
	return dato;	
}

void Intercambio()
{
	int num1, num2, temp;
	
	cout<<"Ingrese valor de num1: \t";
	num1 = leedatoe();
	
	cout<<"Ingrese valor de num2: \t";
	num2 = leedatoe();
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<"\n";
	cout<<"El nuevo valor num1 es:\t" << num1 <<endl;
	cout<<"El nuevo valor num2 es:\t" << num2 <<endl;
	
}

int main()
{
	Intercambio();
		
	return 0;
}



