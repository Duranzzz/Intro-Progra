/*
Nombre: Ejercicio 3
Autor: Leonardo Duran
Fecha: 23/03/2025

Simula las visitas nocturnas al refrigerador de un ciudadano.
Imprime "Om-nom-nom :P" si hay pastel y "Sin pastel :(" si se acaba.
El ciclo se detiene después de 10 visitas o cuando se termina el pastel.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string line;
	int cont = 0;
	
	// Leer la línea completa y almacenarla en la variable "cin"
	getline(cin, line);
	
	// Obtener la longitud de la línea
	int linelength = line.length();
	
	// Recorrer cada carácter de la línea
	for (int i = 0; i < linelength; i++){
		if (line[i] == '1'){
      
			// Si hay pastel, imprime la respuesta e incrementa el contador
			cout << "Om-nom-nom :P" << endl;
			cont ++;
      
		} else if (line[i] == '0'){
      
			// Si ya no hay pastel, imprime la respuesta y termina
			cout << "No cake :(" << endl;
			break;
		}
		
		// Si ya ha hecho 10 visitas, termina el ciclo
		if (cont == 10){
			// Detiene el ciclo si ya ha hecho 10 visitas
			break;
		}
	}
	return 0;
}
	
	
