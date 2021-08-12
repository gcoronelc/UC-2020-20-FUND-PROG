/* 
	Ejemplo de calcular el área del triángulo
  Area = (base*altura)/2
*/

#include<iostream>
using namespace std;

int main()
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
		
	// Declaración de variables (según el ejemplo)
	
	double Area, base, altura;
	
	// Entrada de Datos
	
	cout << "Ingrese base: ";    cin >> base;
	cout << "Ingrese altura: ";  cin >> altura;
	
	// Proceso
	
	Area = (base * altura)/2;
	
	// Salida de Datos
	
	cout << endl;
	cout << "EL área del triangulo es: " << Area << endl;
	cout << endl;
	
	system("pause");
	return 0;
}





