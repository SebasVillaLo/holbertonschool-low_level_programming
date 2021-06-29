#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	for (j = 1; j <= i; j++)
		_putchar(*(s - j));
	_putchar('\n');
}
