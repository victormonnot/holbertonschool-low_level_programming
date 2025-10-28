#include <stdio.h>
#include "main.h"
/**
 * _strlen - Entry point
 *
 * Description : Retourne la longueur d'un string
 * @s: valeur une
 *
 * Return: Toujours 0 (succès)
 */
int _strlen(char *s)
{
	int longueur;

	while (*s != '\0')
	{
		longueur++;
		s++;
	}
	return (longueur);
}
