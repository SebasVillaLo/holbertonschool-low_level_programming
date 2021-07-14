#include "holberton.h"
/**
 * alloc_grid - Funtion
 * @width: char
 * @height: char
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **p;

	i = j = 0;
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	if (height < 1)
		return (NULL);
	p = (int **)malloc(height * sizeof(p));
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
