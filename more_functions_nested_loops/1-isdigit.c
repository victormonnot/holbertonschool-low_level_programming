#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 *
 * Description : Check si c'est un chiffre
 * @c: le charactère a check
 * Return: Toujours 0 (succès)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
