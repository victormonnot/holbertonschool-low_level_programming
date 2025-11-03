#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 *
 * Description : fills memory with a constant byte.
 * @s: a
 * @accept: a
 *
 * Return: Toujours 0 (succès)
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
