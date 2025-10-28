#include <stdio.h>
#include "main.h"
/**
 * print_rev - Entry point
 *
 * Description : affiche un string a l'envers puis saute une ligne
 * @s: charactère a afficher
 *
 * Return: Toujours 0 (succès)
 */
void print_rev(char *s)
{
	int longueur = 0;
	int i = 0;

	while (*s != '\0')
	{
		s++;
		longueur++;
	}
	s--;
	for (i = 0; i < longueur; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
