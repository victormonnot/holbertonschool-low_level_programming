#include <stdio.h>
#include "main.h"
/**
 * cap_string - Entry point
 *
 * Description : reverse le contenu d'une array d'int
 * @phrase: le nombre d'éléments
 *
 * Return: Toujours 0 (succès)
 */
char *cap_string(char *phrase)
{
	int i = 0;
	int j;
	char array[] = " \t\n,;.!?\"(){}";

	while (phrase[i] != '\0')
	{
		if (i == 0 && phrase[i] >= 'a' && phrase[i] <= 'z')
		{
			phrase[i] -= 32;
		}
		for (j = 0; array[j] != '\0'; j++)
		{
			if (phrase[i] == array[j] && phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z')
			{
				phrase[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (phrase);
}
