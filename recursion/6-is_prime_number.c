#include "main.h"
#include <stdio.h>

/**
 * calculer_prime - Calcul si un nombre est primaire
 * @n: number
 * @i: pour calculer
 *
 * Return: .
 */
int calculer_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (calculer_prime(n, i - 1));
}

/**
 * is_prime_number - Dis si un int est un nombre primaire ou pas
 * @n: number
 *
 * Return: .
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calculer_prime(n, n - 1));
}
