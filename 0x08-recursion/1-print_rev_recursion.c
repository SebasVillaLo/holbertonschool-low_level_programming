a#include "holberton.h"

/**
 * _print_rev_recursion - Prototipo para resolver el problema
 * @s: Character
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
