#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Retourne la longueur d'un string
 * @s: string
 *
 * Return: nothing.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
