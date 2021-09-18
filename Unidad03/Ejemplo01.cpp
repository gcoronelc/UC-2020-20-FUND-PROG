#include<iostream>
using namespace std;

int calcSuma(int a, int b){
	return (a+b);
}

int main()
{  
	int x, y;
     
  x=3; 
  y=4;
    
	int suma = calcSuma(x,y);
    
	cout << "Valor de x: " << x << endl;
	cout << "Valor de y: " << y << endl;
	cout << "Suma: " << suma << endl;
	cout << endl;

return 0;
} 
