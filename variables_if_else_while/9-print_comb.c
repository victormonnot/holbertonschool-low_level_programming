#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : Affiche tout les nombres a un digit de base 10
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
