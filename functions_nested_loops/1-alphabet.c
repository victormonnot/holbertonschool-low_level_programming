#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description : Print l'alphabet
 *
 * Return: Toujours 0 (succès)
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	_putchar (lettre);
	_putchar ('\n');
}
/**
 * main - Entry point
 *
 * Description : Check the code
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
