#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Description : multiplie 2 integer
 *
 * Return: Toujours 0 (succès)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');
}
