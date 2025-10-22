#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Description : Affiche la table de 9
 *
 * Return: Toujours 0 (succès)
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;

			if (r < 10)
			{
				if (j <= 0)
				{
					_putchar(r + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
			}
			else
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');

			}
			if (j != 9)
			_putchar (',');

		}
		_putchar('\n');
	}
}
