#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description : Sort le dernier digit d'un nombre
 * @n: le nombre a check
 *
 * Return: Toujours 0 (succès)
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		ld = -ld;
	}
	else
	{
		ld = ld;
	}

	_putchar('0' + ld);

	return (ld);
}
