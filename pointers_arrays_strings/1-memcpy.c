#include <stdio.h>
#include "main.h"
/**
 * _memcpy - Entry point
 *
 * Description : fills memory with a constant byte.
 * @dest: a
 * @src: a
 * @n: a
 *
 * Return: Toujours 0 (succès)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
