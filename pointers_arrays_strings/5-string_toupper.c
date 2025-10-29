#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Entry point
 *
 * Description : reverse le contenu d'une array d'int
 * @jsp: le nombre d'éléments
 *
 * Return: Toujours 0 (succès)
 */
char *string_toupper(char *jsp)
{
	int i = 0;

	while (jsp[i] != '\0')
	{
		if (jsp[i] >= 'a' && jsp[i] <= 'z')
		{
			jsp[i] = jsp[i] - 32;
		}
		i++;
	}
	return (jsp);
}
