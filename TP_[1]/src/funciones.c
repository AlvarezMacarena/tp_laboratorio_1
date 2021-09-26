#include <stdio.h>
#include "funciones.h"

int Menu(int num1, int num2) {
	int seleccion = 0;

	printf("\n   >>> MENU CALCULADORA <<<");
	printf("\n\n   1. Ingresar primer operando  (A = %i): ", num1);
	printf("\n   2. Ingresar segundo operando (B = %i): ", num2);
	printf("\n   3. Calcular todas las operaciones.");
	printf("\n   4. Informar resultados.");
	printf("\n   5. Salir.\n");

	printf("\n   Introduzca opcion (1-5): ");
	scanf("%d", &seleccion);

	if (seleccion < 1 || seleccion > 5) {
		printf("\n   Opcion incorrecta\n\n");
	}

	return seleccion;
}

int Suma(int num1, int num2) {
	return num1 + num2;
}
int Resta(int num1, int num2) {
	return num1 - num2;
}
int Producto(int num1, int num2) {
	return num1 * num2;
}
float Cociente(int num1, int num2) {
	return num1 / num2;
}
int Factorial(int num) {
	int respuesta;

	if (num == 0) {
		respuesta = 1;
	} else {
		respuesta = num * Factorial(num - 1);
	}

	return respuesta;
}

