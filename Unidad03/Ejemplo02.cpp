#include<iostream>
using namespace std;

void incrementar(int &a, int b){
	a += b;
}

int main()
{  
	int x, y;
     
  x=3; 
  y=4;
    
  // Antes de llamar al procedimientos
	cout << "Valor de x: " << x << endl;
	cout << "Valor de y: " << y << endl;  
    
  // Llamada al procedimiento
	incrementar(x,y);
    
  // Despues de llamar al procedimiento
	cout << "Valor de x: " << x << endl;
	cout << "Valor de y: " << y << endl;
	cout << endl;

return 0;
} 
