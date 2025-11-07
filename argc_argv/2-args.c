#include <stdio.h>

/**
 * main - Affiche tout les arguments
 * @argc: le nombre d'arguments
 * @argv: l'array d'arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
