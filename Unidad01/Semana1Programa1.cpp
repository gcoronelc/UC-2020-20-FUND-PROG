/* 
	Ejemplo de calcular el �rea del tri�ngulo
  Area = (base*altura)/2
*/

#include<iostream>
using namespace std;

int main()
{
	
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
		
	// Declaraci�n de variables (seg�n el ejemplo)
	
	double Area, base, altura;
	
	// Entrada de Datos
	
	cout << "Ingrese base: ";    cin >> base;
	cout << "Ingrese altura: ";  cin >> altura;
	
	// Proceso
	
	Area = (base * altura)/2;
	
	// Salida de Datos
	
	cout << endl;
	cout << "EL �rea del triangulo es: " << Area << endl;
	cout << endl;
	
	system("pause");
	return 0;
}





