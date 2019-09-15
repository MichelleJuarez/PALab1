#include "Recursividad.h"


Recursividad::Recursividad()
{

}

int Recursividad::Fibonacci(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return (Fibonacci(num - 1) + Fibonacci(num - 2));
	}
}

int Recursividad::Factorial(int num2)
{
	if (num2 == 0)
	{
		return 1;
	}
	else
	{
		return num2 * Factorial(num2 - 1);
	}
}

int Recursividad::Binario(int divisor)
{
	if (divisor<2)
	{
		return divisor;
	}
	else
	{
		return divisor % 2 + (10* Binario(divisor/2));
	}
}

int Recursividad::Multiplicacion(int multiplicando, int multiplicador)
{
	if (multiplicador==1)
	{
		return multiplicando;
	}
	else
	{
		return multiplicando + Multiplicacion(multiplicando, multiplicador-1);
	}
}

int Recursividad::Multiplicacion2(int imultiplicando, int imultiplicador)
{
	for(int i = imultiplicador; i < 0 ; i--)
	{
		imultiplicando += imultiplicador;
	}
	return imultiplicando;
}


System::String^ obtenerTextoArchivo(System::String^ ruta)
{

}