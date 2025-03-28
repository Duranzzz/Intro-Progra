/*
Nombre: Ejercicio 13
Autor: Leonardo Duran
Fecha: 26/03/2025

Este programa calcula la suma de los primeros N números
elevados a la k-ésima potencia.
*/

#include <iostream>
using namespace std;

int main() {
   
	// Declarar y solicitar variables
	int N, k;
	cout << "N = ";
	cin >> N;
	cout << "k = ";
	cin >> k;
	
	// Acumulador de la sumatoria
	int suma = 0;

	// Bucle para recorrer los primeros N números
	for (int i = 1; i <= N; i++){
		
		// Inicializar la potencia en 1
		int aux = 1;
		
		// Bucle para calcular la potencia de i^k
		for (int j = 1; j <= k; j++){
			 // Calculamos i^k
			aux *= i;
		}
		
		// Sumamos el resultado a la sumatoria
		suma += aux;
	}
	cout << "Resultado = " << suma;
    return 0;
}
