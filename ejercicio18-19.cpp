/*
Nombre: Ejercicio 18 - 19
Autor: Leonardo Duran
Fecha: 27/03/2025

Programa que manipula un numero con operaciones establecidas
de modo que sea igual a cero y cuenta cuantos manipulaciones fueron necesarias. 
El programa pide un rango de numeros a los cuales manipular.
Imprime el numero y cuantas cambios fueron necesarios para que sea cero.
*/

#include <iostream>
using namespace std;

int main() {
	
	// Declarar y leer valor inicial y valor final
	int inicio, final;
	cin >> inicio >> final;
	
	// Verificar que ambos números sen positivos y no nulos
	if (inicio <= 0 || final <= 0){
		cout << "El numero debe ser positivo y mayor a zero";
		
	  // Verificar que el valor final no sea menor que el valor inicial	
	} else if (final < inicio){
		cout << "El numero de fin no debe ser menor al inicial";
		
	} else {
		
		/*
		Bucle que modifica cada numero desde el inico hasta el final
		Imprimiendo la cantidad de modificaciones necesarias para llegar a cero.
		Termina cuando se modifica el último núemero
		*/
		for (inicio; inicio <= final; inicio++){
		
			// Variable de contador y variable que salva el inicio	
			int contador = 0;
			int aux = inicio;
			
			// Mientras inicio no sea cero continuar modificando inicio
			while (inicio != 0){
				contador++;
				
				// Modificar el "inicio" según la condiciones
				if (inicio % 3 == 0){
					inicio += 4;
				} else if (inicio % 4 == 0){
					inicio /= 2;
				} else {
					inicio--;
				}
			}
			
			// Devolvemos el valor salvado a inicio
			inicio = aux;
			
			// Imprimimos por cada iteracion 
			cout << inicio << " -> " << contador << endl;
		}
		
	}
	return 0;
}
