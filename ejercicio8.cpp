/*
Nombre: Ejercicio 8
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

int main (){
	
	// Declarar las variables de entrada y auxiliares
	string str, str2, str3;
	
	// Leer toda la línea y almacenarla
	getline(cin, str);
	
	// Medir la longitud de la variable ingresada
	int paronstr = str.size();
	
	// Verificar si la longitud de la string es menor o igual a 100
	if (paronstr <= 100){
		// Crear la versión original sin espacios
		for (int i = 0; i < paronstr; i++){
			if (str[i] == ' '){
				// Si es un espacio, lo ignora
				continue;
			} else {
				// Agrega el carácter a la cadena
				str3 += str[i];
			}
		}
	
		// Crear la versión invertida de la cadena sin espacios
		for (int i = paronstr - 1; i >= 0; i--){
			if (str[i] == ' '){
				// Si es un espacio, lo ignora
				continue;
			} else {
				// Agrega el carácter a la cadena invertida
				str2 += str[i];
			}
		}
	
		// Comparar las cadenas
		if (str3 == str2){
			// Si son iguales, es un palíndromo
			cout << "YES";
		} else {
			// Si no son iguales, no es un palíndromo
			cout << "NO";
		}
		
	} else {
		// Si la longitud de la string en mayor a 100
		cout << "Longitud maxima superada";
	}
	
	
	return 0;
}
