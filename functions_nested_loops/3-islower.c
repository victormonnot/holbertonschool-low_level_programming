#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 *
 * Description : check si c'est minuscule
 * @c: la lettre
 *
 * Return: Toujours 0 (succès)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
