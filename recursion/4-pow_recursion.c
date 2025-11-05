#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Retourne la valeur d'un nombre x a la puissance de y
 * @x: le nombre
 * @y: la puissance
 *
 * Return: nothing.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
