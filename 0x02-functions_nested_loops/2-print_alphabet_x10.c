#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 * @void - no argument
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}