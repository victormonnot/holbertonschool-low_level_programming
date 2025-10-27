#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description : Affiche les chiffres de 1a100 en ecrivant Fizz et Buzz parfois
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0 && i != 100)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
