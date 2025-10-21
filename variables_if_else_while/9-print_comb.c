#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : Affiche tout les chiffres avec des ", " entre eux
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c < '9')
		{
			putchar(c);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(c);
		}
	}

	return (0);
}
