#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 *
 * Description : Affiche un carré
 * @size: la taille du carré
 *
 * Return: Toujours 0 (succès)
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
			for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
