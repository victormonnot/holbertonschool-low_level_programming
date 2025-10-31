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

	while (phrase[i] != '\0')
	{
		if (i == 0 && phrase[i] >= 'a' && phrase[i] <= 'z')
		{
			phrase[i] -= 32;
		}
		if (phrase[i] == ' ' || phrase[i] == '\t' || phrase[i] == '\n' ||
			phrase[i] == ',' || phrase[i] == ';' || phrase[i] == '.' ||
			phrase[i] == '!' || phrase[i] == '?' || phrase[i] == '"' ||
			phrase[i] == '(' || phrase[i] == ')' || phrase[i] == '{' ||
			phrase[i] == '}')
			{
				if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z')
				{
					phrase[i + 1] -= 32;
				}
			}
		i++;
	}
	return (phrase);
}
