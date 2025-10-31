#include <stdio.h>
#include "main.h"
/**
 * leet - Entry point
 *
 * Description : changer certaines lettre en chiffre
 * @phrase: la phrase a modifier
 *
 * Return: Toujours 0 (succès)
 */
char *leet(char *phrase)
{
	int i = 0;
	int j = 0;
	char leslettres[] = "aAeEoOtTlL";
	char leschiffres[] = "4433007711";

	for (i = 0; phrase[i] != '\0'; i++)
	{
		for (j = 0; leslettres[j] != '\0'; j++)
		{
			if (phrase[i] == leslettres[j])
			{
				phrase[i] = leschiffres[j];
				break;
			}
		}
	}
	return (phrase);
}
