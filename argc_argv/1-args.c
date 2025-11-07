#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments ajouté
 * @argc: le nombre d'arguments
 * @argv: l'array d'arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
