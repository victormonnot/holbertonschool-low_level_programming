#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 *
 * Description : compute la valeur absolue d'un integer
 * @n: le integer a check
 *
 * Return: Toujours 0 (succès)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
