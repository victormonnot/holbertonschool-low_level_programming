#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Print un string a l'envers
 * @s: string
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
