#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description : Affiche 10 fois les chiffres de 0 à 14
 *
 * Return: Toujours 0 (succès)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar (i / 10 + '0');
			}
			_putchar (i % 10 + '0');
		}
		_putchar ('\n');
	}
}
