#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// \fn int Menu(int, int)
/// \brief Muestra el menu al usuario para que elija la opci�n que desee del 1-5.
/// \param num1 Pide al usuario que ingrese el primer operando (entero).
/// \param num2 Pide al usuario que ingrese el segundo operando (entero).
/// \return Retorna dos numeros enteros.
int Menu(int num1, int num2);

/// \fn int Suma(int, int)
/// \brief Realiza la suma de los dos n�meros enteros ingresados por el usuario.
/// \param num1 Primer entero ingresado por el usuario.
/// \param num2 Segundo entero ingresado por el usuario.
/// \return Retorna el resultado de la suma de los n�meros enteros ingresados.
int Suma(int num1, int num2);

/// \fn int Resta(int, int)
/// \brief Realiza la resta de los dos n�meros enteros ingresados por el usuario.
/// \param num1 Primer entero ingresado por el usuario.
/// \param num2 Segundo entero ingresado por el usuario.
/// \return Retorna el resultado de la resta de los n�meros enteros ingresados.
int Resta(int num1, int num2);

/// \fn int Producto(int, int)
/// \brief Realiza la multiplicaci�n de los dos n�meros enteros ingresados por el usuario.
/// \param num1 Primer entero ingresado por el usuario.
/// \param num2 Segundo entero ingresado por el usuario.
/// \return Retorna el resultado de la multiplicaci�n de los n�meros enteros ingresados.
int Producto(int num1, int num2);

/// \fn float Cociente(int, int)
/// \brief Realiza la divisi�n de los dos n�meros enteros ingresados por el usuario.
/// \param num1 Primer entero ingresado por el usuario.
/// \param num2 Segundo entero ingresado por el usuario.
/// \return Retorna el resultado de la divisi�n de los n�meros enteros ingresados.
float Cociente(int num1, int num2);

/// \fn int Factorial(int)
/// \brief Realiza la factorizaci�n del n�mero entero ingresado por el usuario.
/// \param num Numero entero ingresado por el usuario.
/// \return Retorna el factorial del numeor entero ingresado.
int Factorial(int num);


#endif /* FUNCIONES_H_ */
