#include <stdio.h>
#include "main.h"
/**
 * _strspn - Entry point
 *
 * Description : fills memory with a constant byte.
 * @s: a
 * @accept: a
 *
 * Return: Toujours 0 (succès)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int longueur = 0;
	int trouveoupas;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		trouveoupas = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				trouveoupas = 1;
				break;
			}
		}
		if (trouveoupas == 0)
		{
			return (longueur);
		}
		longueur++;
	}
	return (0);
}
