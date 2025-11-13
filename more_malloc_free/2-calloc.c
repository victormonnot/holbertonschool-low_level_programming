#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: le nombre d'élémens dans l'array
 * @size: la tailles des elements en bytes
 *
 * Return: A pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	p = (char *)ptr;

	for (i = 0; i < total; i++)
		p[i] = 0;

	return (ptr);
}