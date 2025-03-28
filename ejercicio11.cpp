/*
Nombre: Ejercicio 11
Autor: Leonardo Duran
Fecha: 25/03/2025

Programa que calcula los primeros
10 términos de una serie matemática
*/

#include <iostream>
using namespace std;

int main(){
	
	// Definir el primer término de la serie
	double U = 1.0;
	
	// Inicializar el contador
	int i = 0;
	
	// Imprimir el término 0 de la serie
	cout << "U" << i << " = " <<  U << endl;
	
	// Calcular e imprimir los siguentes 10 términos de la secuencia
	// Itera desde i = 0 hasta i = 9
	for (i; i <= 9; i++){
		// Formula la serie
		U = U / (i + 1);
		// Imprime el término actual y sumamos uno a i (por que se empieza en 0)
		cout << "U" << i + 1 << " = " <<  U << endl;
	}
  
	return 0;
}
