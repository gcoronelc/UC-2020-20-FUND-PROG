#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int cantidad;
	double precio, total, descuento, totalPagar;
	
	for(int cont=1; cont<=3; cont++){
		
		// Lectura de datos
		cout << "PRODUCTO NRO." << cont << endl;
		cout << "===============================================" << endl;
		cout << "Precio: "; cin >> precio;
		cout << "Cantidad: "; cin >> cantidad;
		
		// Proceso
		total = precio * cantidad;
		descuento = total * (total>200?0.15:0.0);
		totalPagar = total - descuento;
		
		// Reporte
		cout << "Total: " << total << endl;
		cout << "Descuento: " << descuento << endl;
		cout << "Total pagar: " << totalPagar << endl;
		cout << endl;
		
	}
	
	// Fin
	system("pause");
	return 0;
}
