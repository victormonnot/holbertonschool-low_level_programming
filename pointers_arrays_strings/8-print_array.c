#include <stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 *
 * Description : affiche n elements d'un array d'integer
 * @a: les elements
 * @n: combien d'elements a afficher
 *
 * Return: Toujours 0 (succès)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else if (i > 0)
		{
			printf(", ");
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
