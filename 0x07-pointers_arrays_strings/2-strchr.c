#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - prints buffer in hexa
 * @c: Character
 * @s: Character
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (NULL);
	}
}
