#include <stdio.h>
#include "main.h"
/**
 * puts_half - Entry point
 *
 * Description : affiche la deuxième moitié d'un string
 * @str: string
 *
 * Return: Toujours 0 (succès)
 */
void puts_half(char *str)
{
	int longueur = 0;
	int i;

	while (str[longueur] != '\0')
	{
		longueur++;
	}
	if (longueur % 2 == 0)
	{
		i = longueur / 2;
		for (; i < longueur; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (longueur % 2 == 1)
	{
		i = (longueur + 1) / 2;
		for (; i < longueur; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
