/*
Nombre: Ejercicio 16
Autor: Leonardo Duran
Fecha: 26/03/2025

Programa que encuentra el cociente de una division
con operadores de suma y resta, entre dos números naturales
*/

#include <iostream>
using namespace std;

int main(){
	// Declarar y solicitar entradas 
	int dividendo, divisor;
	cin >> dividendo >> divisor;
	
	// Declarar variables auxiliares
	int contador = 0;
	int cociente = 0;
	
	// Caso especial indetefinido
	if (divisor == 0){
		cout << "Indefinido" << endl;
		
	  // Si el dividendo es mayor o igual que el divisor, y ambos son positivos
	} else if ((dividendo > 0) && (dividendo >= divisor) && (divisor > 0)){
		while (cociente < dividendo){
			// Contamos cuántas veces sumamos el divisor
			contador ++;
			// Sumar el divisor al cociente
			cociente += divisor;
			
			 // Si al agregar un nuevo divisor, el cociente supera al dividendo, 
			 // salimos del bucle
			if (cociente + divisor > dividendo){
			break;
			}
		}	
		// Imprimimos el cociente (el número de veces que el divisor cabe en el dividendo)
		cout << contador << endl;
		// Imprimimos el resto, que es lo que falta para llegar al dividendo
		cout << dividendo - cociente;
		
	  // Si el dividendo es menor que el divisor	
	} else if ((dividendo > 0) && (dividendo < divisor) && (divisor > 0)){
		cout << 0 << endl;
		cout << dividendo;
		
	  // Si se da un caso no contemplado, mostramos un mensaje por simplicidad
	} else {
		cout << "Caso no incluido por simplicidad";
	}
	
	return 0;
}
