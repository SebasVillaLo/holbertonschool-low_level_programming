#include "holberton.h"
/**
 * alloc_grid - Funtion
 * @width: char
 * @height: char
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i, j;

	arrar = malloc(height * sizeof(int));

	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	array[i] = malloc(width * sizeof(int));

	if (array[i] == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
	array[i][j] = 0;
	}
	}
	return (array);
}
