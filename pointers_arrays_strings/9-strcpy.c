#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Entry point
 *
 * Description : copie le string pointé de src vers dest
 * @dest: copie vers ça
 * @src: copie depuis ça
 *
 * Return: Toujours 0 (succès)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
