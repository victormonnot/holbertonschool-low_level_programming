#include <stdio.h>
#include "main.h"
/**
 * _strcat - Entry point
 *
 * Description : copie le string pointé de src vers dest
 * @dest: copie vers ça
 * @src: copie depuis ça
 *
 * Return: Toujours 0 (succès)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
