/*
Nombre: Ejercicio 11
Autor: Leonardo Duran
Fecha: 26/03/2025

Este programa calcula los primeros 10 términos 
de la serie que converge a la constante de Euler (e).
Se calcula cada término de la serie y se acumula en `V`, 
que representa la aproximación de e.
*/

#include <iostream>
using namespace std;

int main(){
	
	// Inicialización de variables
	// Primer término de la serie
	double U = 1.0;
	double V;
	
	// Término 0 de la serie
	V += U;
	
	// Calcular e imprimir los siguentes 10 términos
	for (int i = 0; i <= 9; i++){
		// Calcular el siguiente término de la serie
		U = U / (i + 1);
		// Sumarlo a la aproximación de e
		V += U;
		cout << "U" << i + 1 << " = " <<  U << " V" << i + 1 << " = " << V << endl;
	}
	return 0;
}
