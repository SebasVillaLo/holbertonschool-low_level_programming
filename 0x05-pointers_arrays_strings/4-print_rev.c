#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	int n;

	while (s[n] != '\0')
		n++;
	n--;
	for (i = n; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
