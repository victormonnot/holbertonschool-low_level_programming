#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 *
 * Description : check si c'est un chiffre positif ou negatif ou nulle
 * @n: le nomber a check
 *
 * Return: Toujours 0 (succès)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
