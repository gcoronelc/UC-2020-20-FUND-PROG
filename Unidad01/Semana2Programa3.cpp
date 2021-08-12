#include<iostream>
using namespace std;

int main( )
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	string NombreProducto;
	double precio, cantidad, descuento, MontoBruto, MontoDescuento, MontoTotal; 
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================================================" << endl;
	cout << "Ingrese nombre del producto:\t\t\t"; cin >> NombreProducto;
	cout << "Ingrese precio del producto:\t\t\t"; cin >> precio;
	cout << "Ingrese cantidad a comprar del producto:\t"; cin>>cantidad;
	cout << "Ingrese porcentaje de descuento (en decimales):\t"; cin>>descuento;

	// Proceso
	MontoBruto = precio * cantidad;
	MontoDescuento = MontoBruto * descuento;
	MontoTotal = MontoBruto - MontoDescuento;
	
	// Reporte
	
	cout<<"------------- REPORTE: --------------" <<"\n\n";
	cout<<"El monto bruto es:\t\t\t\t" << MontoBruto << "\n";
	cout<<"El monto de descuento es:\t\t\t" << MontoDescuento << "\n";
	cout<<"El monto total es:\t\t\t\t" << MontoTotal << "\n";
	
	return 0;
}


