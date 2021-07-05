#include "holberton.h"

/**
 * _memset - prints buffer in hexa
 * @b: Character
 * @s: Character
 * @n: Character
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
