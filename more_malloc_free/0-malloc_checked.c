#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * malloc_checked - alloue de la memoire
 * @b: le nombre de bytes a allouer
 *
 * Return: .
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
