#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Create an array of integer
 * @min: le min
 * @max: le max
 *
 * Return: A pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int longueur;

	if (min > max)
	{
		return (NULL);
	}

	longueur = max - min + 1;

	arr = malloc(longueur * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longueur; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
