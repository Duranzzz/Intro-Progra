/*
Nombre: Ejercicio 10
Autor: Leonardo Duran
Fecha: 25/03/2025

Programa que calcula el 
máximo común divisor  de dos numeros
*/

#include <iostream>
using namespace std;

int main(){
	
	// Declarar y solicitar las variables
	int n1, n2, save;
	cin >> n1 >> n2;
	
	// Calcular el máximo común divisor
	while (n2 != 0){
		// Guardamos el valor actual de n2 antes de modificarlo
		save = n2;
		// Calculamos el residuo de dividir n1 entre n2
		n2 = n1 % n2;
		// Actualizamos n1 con el valor antiguo de n2 (guardado en save)
		n1 = save;
	}
	
	// Mostrar el último divsior por consola
	cout << n1;
	return 0;
}
