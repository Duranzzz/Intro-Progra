/*
Nombre: Ejercicio 2
Autor: Leonardo Duran
Fecha: 23/03/2025

Programa que lee una línea y devuelve 
las palabras encerradas en corchetes
*/

#include <iostream>
#include <string>
using namespace std;

int main (){
	string line;
	
	// Varibale de almacenamiento
	string word;
	
	// Leer la línea completa y almacenarla en la variable "cin" 
	getline(cin, line);
	
	// Obtener la longitud de la linea
	int linelength = line.length();
	
	// Recorrer cada carácter de línea
	for (int i = 0; i < linelength; i++){
		
		if (i == linelength - 1){
			// En caso de estar en el último carácter
			word += line[i];
			cout << "[" << word << "]" << endl;	
			
		} else if (line[i] != ' '){
			// En caso de haber una letra
			word += line[i];
			
		} else if (line[i] == ' '){
			// En caso de haber un espacio
			cout << "[" << word << "]" << endl;
			word = "";
		}
	}
	
	return 0;
}
