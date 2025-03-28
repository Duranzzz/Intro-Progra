/*
Nombre: Ejercicio 5
Autor: Leonardo Duran
Fecha: 23/03/2025

Descripción:
Este programa imprime un calendario alineado según el primer día de la semana (n) y la cantidad 
de días en el mes (k). Se asegura de que la salida tenga el formato correcto, con cada semana 
dividida en filas y sin espacios adicionales al final de cada línea.
*/

#include <iostream>
using namespace std;

int main(){
	
	// Declarar y solicitar los datos
	int n;
	int k;
	cin >> n >> k;
	
	/*
	Variable de control de los saltos de línea.
	Cuenta la cantidad de impresiones por línea.
	*/
	int cont = 0;
    
	/*
	Imprimir espacios en la primera fila hasta
	que llegue el primer día del mes.
	ESTE BLOQUE NO SE EJECUTA SI n = 1.
	*/ 
	for (int i = 1; i < n; i++){
		// Imprime 3 espacios " ", "#", " "
        cout << "   ";
        // Aumenta el contador por cada impresión
        cont++;
    }
	
	// Imprimir los días del mes alineados correctamente
	for (int dia = 1; dia <= k; dia++){
		
		// Aumentar contador por cada impresión
		cont ++;
		
		// Mantener el orden para números de un solo dígito
		if (dia < 10) {
		    if (cont % 7 == 0){
		        cout << " " << dia << endl; // Espacio y salto de línea si k = domingo
		    } else {
		        cout << " " << dia << " "; // Formato para k != domingo 
		    }
		    
		// Evitar imprimir espacio en el último dígito   
		} else if (dia == k){
		       cout << dia << endl;
		       
		// Mantener el orden para números de dos dígitos
		} else {
		    if (cont % 7 == 0){
		        cout << dia << endl; // Salto de línea si k = domingo
		    } else {
		        cout << dia << " "; // Formato para k != domingo
		    }
		}
	}
	return 0;
}
