#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 *
 * Description : swap la valeur de 2 int
 * @a: valeur une
 * @b: valeur deux
 *
 * Return: Toujours 0 (succès)
 */
void swap_int(int *a, int *b)
{
	int test;

	test = *a;
	*a = *b;
	*b = test;
}
