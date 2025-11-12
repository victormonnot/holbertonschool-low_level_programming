#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * free_grid - free
 * @grid: l'adresse de la grille
 * @height: la hauteur de la grille
 *
 * Return: .
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
