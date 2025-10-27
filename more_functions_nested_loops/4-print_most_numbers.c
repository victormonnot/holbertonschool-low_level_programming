#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description : Affiche les chiffres de 0 a 9 sauf 2 et 4
 *
 * Return: Toujours 0 (succès)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	if (i != 2 && i != 4)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');
}
