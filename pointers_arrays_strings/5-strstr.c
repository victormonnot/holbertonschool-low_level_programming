#include <stdio.h>
#include "main.h"
/**
 * _strstr - Entry point
 *
 * Description : fills memory with a constant byte.
 * @haystack: a
 * @needle: a
 *
 * Return: Toujours 0 (succès)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *h != '\0')
		{
			h++;
			n++;
		}
		if (*h == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
