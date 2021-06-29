#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j = 0;
	char k[500];

	while (*(s + i))
	{
		*(k + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(k + j);
		j++;
		i--;
	}
	return (0);
}
