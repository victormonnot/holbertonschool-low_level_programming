#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - additionne
 * @argc: le nombre d'arguments
 * @argv: l'array d'arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int somme = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
