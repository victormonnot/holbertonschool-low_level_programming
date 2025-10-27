#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 *
 * Description : Affiche un triangle
 * @size: la taille du triangle
 *
 * Return: Toujours 0 (succès)
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
			for (i = 0; i < size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar (' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
