Algoritmo Ejemplo03
	// Variables
	Definir valorEntero, factorial Como Entero;
	// Lectura
	Escribir "Ingrese un número entero positivo: ";
	Leer valorEntero;
	// Proceso 
	factorial <- 1;
	Para contador<-2 Hasta valorEntero Con Paso 1 Hacer
		factorial <- factorial * contador;
	Fin Para
	// Reporte
	Escribir "Factorial de ", valorEntero, " es ", factorial;
	Escribir contador;
FinAlgoritmo
