/*
Nombre: Ejercicio 15
Autor: Leonardo Duran
Fecha: 26/03/2025

Programa que tranforma 
un n{umero decimal a binario
*/

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	// Declarar y solicitar variable
	int numero;
	cin >> numero;
	
	// Caso especial número = 0
	string binario = "";
	if (numero == 0){
		cout << 0;
	}
	
	// Calcular los dígitos del binario en el orden correcto
	// Operar siempre que que el cociente sea un número entero mayor que cero
	while (numero > 0){
		
		// Calcular los digitos
		int digito = numero % 2;
		
		//Agregar el nuevo dígito a la izquierda
		binario = to_string(digito) + binario;
		
		// Dividir cociente entre 2
		numero /= 2;
	}

  // Mostramos lo aculmulado por pantalla
	cout << binario;
	return 0;
}
