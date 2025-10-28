#include <stdio.h>
#include "main.h"
/**
 * puts2 - Entry point
 *
 * Description : affiche tout les charactères un sur deux d'un string
 * @str: string
 *
 * Return: Toujours 0 (succès)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
