/*
Nombre: Ejercicio 1
Autor: Leonardo Duran
Fecha: 23/03/2025

Este programa lee una línea de texto y encuentra el índice del carácter 
siguiente al último de cada palabra. Asume que las palabras están separadas por un 
único espacio y no hay espacios al inicio ni al final.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string line;
	
	//Leer la línea completa y almacenarla en la variable 
	getline(cin, line);
	
	//Obtener la longitud de la linea
	int linelength = line.length();
	
	//Recorrer cada carácter de línea
	for (int i = 0; i < linelength; i++){
		if (line[i] == ' '){
			//Si se encuentra un espacio, imprimir su índice 
			cout << i << endl;
		} else if (i == linelength - 1){
			//Si es ultimo carácter, imprimir su índice + 1
			cout << ++i << endl;
		}
	}
	return 0;
}



