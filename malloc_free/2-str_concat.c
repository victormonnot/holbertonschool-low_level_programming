#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * str_concat - retourne un pointeur qui contient la copie d'un string
 * @s1: le premier string a copier
 * @s2: le deuxième string a copier
 *
 * Return: .
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int longueur1 = 0;
	unsigned int longueur2 = 0;
	unsigned int i;
	unsigned int j;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}


	while (s1[longueur1] != '\0')
	{
		longueur1++;
	}
	while (s2[longueur2] != '\0')
	{
		longueur2++;
	}

	concat = malloc((longueur1 + longueur2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longueur1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < longueur2; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';

	return (concat);
}
