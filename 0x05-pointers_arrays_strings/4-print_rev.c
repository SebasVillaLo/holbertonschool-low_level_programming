#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');

}
