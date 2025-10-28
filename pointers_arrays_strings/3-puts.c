#include <stdio.h>
#include "main.h"
/**
 * _puts - Entry point
 *
 * Description : affiche un string puis saute une ligne
 * @str: charactère a afficher
 *
 * Return: Toujours 0 (succès)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
