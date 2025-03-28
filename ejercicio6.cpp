/*
Nombre: Ejercicio 6
Autor: Leonardo Duran
Fecha: 23/03/2025

Este programa calcula al suma de los 
dígitos de un numero ingresado.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// Declarar variables y leer datos
	int n;
	int suma = 0;
	cin >> n;
	
 	// Bucle para extraer y sumar los dígitos
	while (n != 0){
		
		// Extrae el último dígito del número
		int ultdig = n % 10;
		
		// Lo suma a la variable "suma"
		suma += ultdig;
		
		// Elimina el último dígito (divide por 10)
		n /= 10;
	}
  
	// Imprime la suma de los dígitos
	cout << suma;
	return 0;
}
