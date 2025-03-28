/*
Nombre: Ejercicio 17
Autor: Leonardo Duran
Fecha: 27/03/2025

Este programa imprime por pantalla
los n numeros primos
*/

#include <iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int prime;
	int counter = 0;
	int number = 2;

	// Usar do-while para asegurar que se repita al menos una vez
	do{
		// Si n = 0, mostrar mensaje y acabar el programa
		if (n == 0){
			cout << "El valor introducido es invalido";
			break;
		}
		// Variable de control de salida
		bool prime = true;
		
		// Comprobar si "number" es primo verificando
		// su divisibilidad por los números anteriores
		for (int i = 2; i < number ; i++ ){
			
			// Si i es menor al número para comprobar,
			// se verifica si es primo o no
			if (number % i == 0){
				// Si tiene divisores por detrás "prime = false" y se acaban las pruebas
				prime = false;
				break;
			}
		}
		
		// Si "number" no tiene divisores por detrás se lo imprime
		if (prime == true){
			cout << number << " ";
			
			// Aumentar el contador de impresiones
			counter ++;
		}
		
		// Continuar con el siguiente número
		number++;
	  
	  // Ejecutar hasta que "counter" sea igual que n
	} while (counter < n);

	return 0;
}
