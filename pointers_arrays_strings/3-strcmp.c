#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Entry point
 *
 * Description : copie le string pointé de src vers dest
 * @s1: copie vers ça
 * @s2: copie depuis ça
 *
 * Return: Toujours 0 (succès)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
