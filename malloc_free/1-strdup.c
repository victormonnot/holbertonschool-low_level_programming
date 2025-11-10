#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strdup - retourne un pointeur qui contient la copie d'un string
 * @str: le string a copier
 *
 * Return: .
 */
char *_strdup(char *str)
{
	char *copie;
	unsigned int longueur = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[longueur] != '\0')
	{
		longueur++;
	}

	copie = malloc((longueur + 1) * sizeof(char));

	if (copie == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longueur; i++)
	{
		copie[i] = str[i];
	}

	copie[longueur] = '\0';

	return (copie);
}
