#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int cantidad;
	double precio, total, descuento, totalPagar;
	// Variables reporte final
	int cantProductos, contVentas;
	double sumaPrecios, totalGeneral, descuentoGeneral, totalPagarGeneral, precioPromedio;
	
	// Inicialización de variables del reporte general
	cantProductos = 0;
	contVentas = 0;
	sumaPrecios = 0;
	totalGeneral = 0;
	descuentoGeneral = 0;
	totalPagarGeneral = 0;
	
	// Bucle principal
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
		
		// Proceso Reporte General
		cantProductos += cantidad;
		contVentas++;
		sumaPrecios += precio;
		totalGeneral += total;
		descuentoGeneral += descuento;
		totalPagarGeneral += totalPagar;
		
		// Reporte
		cout << "Total: " << total << endl;
		cout << "Descuento: " << descuento << endl;
		cout << "Total pagar: " << totalPagar << endl;
		cout << endl;
		
	}
	
	// Precio promedio
	precioPromedio = sumaPrecios / contVentas;
	
	// REPORTE GENERAL
	cout << endl;
	cout << "REPORTE GENRAL" << endl;
	cout << "===============================================" << endl;
	cout << "Cantidad de productos: " << cantProductos << endl;
	cout << "Precio promedio: " << precioPromedio << endl;
	cout << "Total general: " << totalGeneral << endl;
	cout << "Descuento genral: " << descuentoGeneral << endl;
	cout << "Total general a pagar: " << totalPagarGeneral << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
