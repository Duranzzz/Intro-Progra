/*
Nombre: Ejercicio 9
Autor: Leonardo Duran
Fecha: 25/03/2025

Programa que calcula en que índice se encuentra la segunda f
dentro de una cadena, y que devuelve valores predeterminados
en función del número de veces que se repite.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	// Declarar y solicitar las variables
	string input;
	cin >> input;
	
	// Contador de apariciones de la letra
	int cont = 0;
	
	// Calcular el tamaño de la string
	int size_input = input.size();
	
	// Calcular la cantidad de veces que se repite la letra
	for (int i = 0; i <= size_input; i++){
		
		// Aumentar el contador si se hallan f's
		if (input[i] == 'f'){
			cont ++;
		}
		
		// Mostrar el índice y detener el programa si cont = 2
		if (cont == 2){
			cout << i << endl;
			break;
		}		
	}
	
	// Casos especiales
	if (cont == 1){
		// Mostrar -1 si solo se repite una vez
		cout << -1 << endl;	
	} else if (cont == 0){
		// Mostrar -2 si no repite ninguna vez
		cout << -2 << endl;
	}
	
	return 0;
}
