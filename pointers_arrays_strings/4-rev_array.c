#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Entry point
 *
 * Description : reverse le contenu d'une array d'int
 * @n: le nombre d'éléments
 * @a: les éléments
 *
 * Return: Toujours 0 (succès)
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	char temporaire;

	for (i = 0; i < n / 2 ; i++)
	{
		temporaire = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temporaire;
	}
}
