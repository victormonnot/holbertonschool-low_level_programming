#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Entry point
 *
 * Description : Affiche le chessboard
 * @a: l'array
 *
 * Return: Toujours 0 (succès)
 */
void print_chessboard(char (*a)[8])
{
	int ligne;
	int colonne;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colonne = 0; colonne < 8; colonne++)
		{
			_putchar(a[ligne][colonne]);
		}
		_putchar('\n');
	}
}
