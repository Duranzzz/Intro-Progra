/*
Nombre: Ejercicio 4
Autor: Leonardo Duran
Fecha: 23/03/2025

Programa que calcula el factorial de un número ingresado por el usuario. 
Verifica que la entrada sea válida y no negativa.
Limita el cálculo a valores menores o iguales a 14 para evitar desbordamiento.
Usa manejo de excepciones para evitar errores al convertir la entrada.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// Variable de control para el bucle
	bool c = true;
	// Variable para almacenar la entrada del usuario
	int n;
	
	
	while (c){
		
		// Leer la entrada
		cin >> n;
		
		// Verificar que el número no sea mayor a 14 para evitar desbordamiento
		if (n > 14){
			cout << "El numero es muy grande. Intentelo de nuevo" << endl << endl;
			// Reinicia el bucle para pedir otra entrada
			continue;
			
		  // Verificar que el número no sea negativo		  	
		} else if (n < 0){
			cout << "El numero es negativo. Intentelo de nuevo" << endl << endl;
			// Reinicia el bucle para pedir otra entrada
			continue;
			
		} else {
				// Si el número es válido, calcular el factorial
				int fact = 1;
				for (int i = 1; i <= n; i++){
					fact *= i;
				}
				// Una vez terminado de calcular el factorial se imprime y cierra el ciclo
				cout << fact << endl;
				c = false;
			}
	}
	
	return 0;
}
