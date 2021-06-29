#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	char *k = s;
	char j;

	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	s--;
	while (k <= s)
	{
		j = *k;
		*k = *s;
		*s = j;
		k++;
		s--;
	}
}
