#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Description : Affiche tout les entiers jusqu'a atteindre 89 en partant de n
 * @n: l'entier de départ
 * Return: Toujours 0 (succès)
 */
void print_to_98(int n)
{
	for (n; n < 98; n++)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else if (n == 98)
		{
			printf("%d\n", n);
		}
	}
	for (n; n > 98; n--)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else if (n == 98)
		{
			printf("%d\n", n);
		}
	}
	printf("98\n");
}
