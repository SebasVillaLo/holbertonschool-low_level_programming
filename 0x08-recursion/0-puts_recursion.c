#include "holberton.h"

/**
 * _puts_recursion - Prototipo para resolver el problema
 * @s: Character
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
