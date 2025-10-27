#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entry point
 *
 * Description : Check si c'est un charactère majuscule
 * @c: le charactère a check
 * Return: Toujours 0 (succès)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
