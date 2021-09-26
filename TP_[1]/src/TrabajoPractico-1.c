/*
 ============================================================================
 Name        : TrabajoPractico-1.c
 Author      : Macarena Alvarez 1E
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:

 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)

 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir

 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
 (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcion = 0;
	int operando1 = 0;
	int operando2 = 0;
	int flagDiv0 = 0;
	int flagNegativoOperando1 = 0;
	int flagNegativoOperando2 = 0;
	int operacionSuma;
	int operacionResta;
	int operacionMultiplicacion;
	float operacionDivision;
	int operacionFactorial1;
	int operacionFactorial2;

	while (opcion != 5) {
		opcion = Menu(operando1, operando2);

		switch (opcion) {

		case 1:
			printf("\n   Ingrese el primer operando: ");
			scanf("%d", &operando1);
			if (operando1 < 0) {
				flagNegativoOperando1 = 1;
			} else {
				flagNegativoOperando2 = 0;
			}
			break; //Termina el caso 1

		case 2:
			printf("\n  Ingrese el segundo operando: ");
			scanf("%d", &operando2);
			if (operando1 < 0) {
				flagNegativoOperando2 = 1;
			} else {
				flagNegativoOperando2 = 0;
			}
			if (operando2 != 0) {
				flagDiv0 = 0;
			} else {
				flagDiv0 = 1;
			}
			break;

		case 3:
			operacionSuma = Suma(operando1, operando2);
			operacionResta = Resta(operando1, operando2);
			operacionMultiplicacion = Producto(operando1, operando2);
			if (flagDiv0 == 0) {
				operacionDivision = Cociente(operando1, operando2);
			}
			if (flagNegativoOperando1 == 0)
				operacionFactorial1 = Factorial(operando1);
			if (flagNegativoOperando2 == 0)
				operacionFactorial2 = Factorial(operando2);
			printf("\n   Operaciones realizadas..");
			printf("\n");
			break;

		case 4:
			printf("\n   El resultado de %d + %d es: %d", operando1, operando2,
					operacionSuma);
			printf("\n   El resultado de %d - %d es: %d", operando1, operando2,
					operacionResta);
			printf("\n   El resultado de %d * %d es: %d", operando1, operando2,
					operacionMultiplicacion);
			if (flagDiv0 == 0) {
				printf("\n   El resultado de %d / %d es: %.2f", operando1,
						operando2, operacionDivision);
			} else {
				printf("\n   ERROR EN COCIENTE: Operando 2 es igual a cero.");
			}
			if (flagNegativoOperando1 == 0) {
				printf("\n   El factorial del primer operando es: %d",
						operacionFactorial1);
			} else {
				printf("\n   ERROR EN FACTORIAL: El operando 1 es negativo.");
			}
			if (flagNegativoOperando2 == 0) {
				printf("\n   El factorial del segundo operando es: %d",
						operacionFactorial2);
			} else {
				printf("\n   ERROR EN FACTORIAL: El operando 2 es negativo.");
			}
			break;

		case 5:
			break;

		}

	}

	return 0;
}
