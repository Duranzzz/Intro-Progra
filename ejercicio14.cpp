/*
Nombre: Ejercicio 14
Autor: Leonardo Duran
Fecha: 26/03/2025

Este programa verifica si un número entero ingresado 
es un palíndromo o no.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// Variable para almacenar el número (cantidades grandes)
	long long int line1;
	cin >> line1;
	
	// Convertir a cadena, calcular distancia, declarar variable a comparar
	string line_string = to_string(line1);
	int line_length = line_string.size();
	string line2 = "";
	
	// Invertir la cadena
	for (int i = line_length - 1; i >= 0; i--){
		// Añadir cada dígito en orden inverso
		line2 += line_string[i];
	}
	
	// Comparar la cadena original con la invertida
	if (line_string == line2){
		cout << "Es palindromo";
	} else {
		cout << "No es palindromo";
	}
	
	return 0;
}
