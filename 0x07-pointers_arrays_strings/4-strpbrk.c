#include "holberton.h"
#include <stddef.h>
/**
 * _strpbrk - prints buffer in hexa
 * @s: Character
 * @accept: Character
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)

	{

		for (k = 0; accept[k] != '\0'; k++)

		{

			if (accept[k] == s[i])

			{

				return (&s[i]);

			}

		}

	}

	return (NULL);
}
