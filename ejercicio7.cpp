/*
Nombre: Ejercicio 7
Autor: Leonardo Duran
Fecha: 23/03/2025

Este programa calcula una aproximación del logaritmo natural
de 2, usando una progresión aritmética 
*/

#include <iostream>
using namespace std;

int main(){
	
	// Declaramos y guardamos las variables
	int n; 
	cin >> n;
	double prog;
	
	// Variable de control de signo
	int base = 1;
	
	// Bucle para calcular la suma de la serie
	for (int i = 1; i <= n; i++){
		
		// Calculamos el término actual de la serie: (-1)^(i+1) / i
        // sign * (1.0 / i) representa el término actual
		prog += base * (1.0/i);
		base *= -1;	
	}
	
	// Imprimimos la aproximación de ln(2)
	cout << prog << endl; 
	
	return 0;
}
