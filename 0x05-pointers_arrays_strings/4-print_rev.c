#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, c;
	char temporal;

	i = 0;
	c = 0;

	while (s[c] != '\0')
	{
		c++;
	c--;
	}
	for (i = 0; i < c; i++)
	{
		temporal = s[i];
		s[i] = s[c];
		s[c] = temporal;
	}
}
