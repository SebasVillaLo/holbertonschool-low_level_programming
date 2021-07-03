#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @c: character
 * Return: Always 0
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 'a' - 'A';
		i++;
	}
	return (c);
}
