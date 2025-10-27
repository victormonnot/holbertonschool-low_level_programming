#include <stdio.h>
#include "main.h"
/**
 * print_line - Entry point
 *
 * Description : Affiche une ligne droite
 * @n: a
 *
 * Return: Toujours 0 (succès)
 */
void print_line(int n)
{
	int i;

		if (n <= 0)
		{
			_putchar ('\n');
		}
		else
		{
			for (i = 0; i <= n; i++)
			{
				_putchar ('_');
			}
			_putchar ('\n');
		}
	}
