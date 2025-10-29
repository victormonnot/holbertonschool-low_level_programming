#include <stdio.h>
#include "main.h"
/**
 * _strncpy - Entry point
 *
 * Description : copie le string pointé de src vers dest
 * @dest: copie vers ça
 * @src: copie depuis ça
 * @n: taille
 *
 * Return: Toujours 0 (succès)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		{
			dest[i] = src[i];
		}
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
