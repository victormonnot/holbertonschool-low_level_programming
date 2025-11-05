#include "main.h"
#include <stdio.h>

/**
 * factorial - Retourne le factoriel d'un nombre n
 * @n: le nombre
 *
 * Return: nothing.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
