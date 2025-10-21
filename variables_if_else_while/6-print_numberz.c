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
	for (char c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
