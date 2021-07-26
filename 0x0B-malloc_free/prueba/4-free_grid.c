#include "holberton.h"
/**
 * free_grid - Funtion
 * @grid: char
 * @height: char
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
	return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid[i]);
}
