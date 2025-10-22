#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description : Print l'alphabet 10 fois
 *
 * Return: Toujours 0 (succès)
 */
void print_alphabet_x10(void)
{
	char lettre;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (lettre = 'a'; lettre <= 'z'; lettre++)
		{
		_putchar (lettre);
		}
	}
	_putchar ('\n');
}
