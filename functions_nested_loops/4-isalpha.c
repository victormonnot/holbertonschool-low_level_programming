#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description : check si c'est minuscule
 * @c: le charactère a check
 *
 * Return: Toujours 0 (succès)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
