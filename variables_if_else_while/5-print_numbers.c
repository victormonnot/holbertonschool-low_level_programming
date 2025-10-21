#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : Affiche l'alphabet sauf 'e' et 'q'
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
