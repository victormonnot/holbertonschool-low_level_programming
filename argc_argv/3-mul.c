#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie
 * @argc: le nombre d'arguments
 * @argv: l'array d'arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int resultat;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	resultat = num1 * num2;

	printf("%d\n", resultat);
	return (0);
}
