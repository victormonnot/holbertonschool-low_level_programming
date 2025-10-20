#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : Affiche si le nombre aléatoire est positif, négatif ou nulle
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	int n;
	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 0\n", n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	return (0);
}
