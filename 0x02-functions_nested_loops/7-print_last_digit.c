#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @n: character
 * Return: 0
 */
int print_last_digit(int n)
{
	int n2;

	if (n < 0)
	{
		n2 = -1 * (n % 10);
		_putchar(n2 + '0');
		return (n2);
	}
	else
	{
		n2 = n % 10;
		_putchar(n2 + '0');
		return (n2);
	}
}
