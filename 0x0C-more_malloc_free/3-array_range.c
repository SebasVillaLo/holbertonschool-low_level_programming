#include "holberton.h"

/**
 * array_range - Join in the program
 * @min: character
 * @max: character
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *r, i = 0, j = min;
	
	if (min > max)
	{
		return (NULL);
	}
	r = (int *)malloc((max - min + 1) * sizeof(int));
	
	if (r == NULL)
		return (NULL);

	while (i <= max - min)
		r[i++] = j++;

	return (r);
}
