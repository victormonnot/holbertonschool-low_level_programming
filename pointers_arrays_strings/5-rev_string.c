#include <stdio.h>
#include "main.h"
/**
 * rev_string - Entry point
 *
 * Description : reverse a string
 * @s: charactère
 *
 * Return: Toujours 0 (succès)
 */
void rev_string(char *s)
{
	int longueur = 0;
	int i = 0;
	char temporaire;

	while (s[longueur] != '\0')
	{
		longueur++;
	}
	for (i = 0; i < longueur; i++)
	{
		longueur--;
		temporaire = s[i];
		s[i] = s[longueur];
		s[longueur] = temporaire;
	}
}
