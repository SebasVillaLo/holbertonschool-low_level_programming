#include "holberton.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: Character
 * @src: Character
 * @n: Character
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
