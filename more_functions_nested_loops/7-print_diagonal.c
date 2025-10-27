#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * Description : Affiche une ligne droite
 * @n: charactère qui fait la diagonal
 *
 * Return: Toujours 0 (succès)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
			for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
