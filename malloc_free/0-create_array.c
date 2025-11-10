#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * create_array - Créer un array de char
 * @size: la taille de l'array
 * @c: le char avec lequel initialiser
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
