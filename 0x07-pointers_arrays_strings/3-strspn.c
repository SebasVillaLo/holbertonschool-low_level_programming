#include "holberton.h"

/**
 * _strspn - prints buffer in hexa
 * @accept: Character
 * @s: Character
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k, salida;

	for (i = 0; s[i] != '\0'; i++)
	{
		salida = 0;
		for (k = 0; accept[k] != '\0'; k++)
			if (accept[k] == s[i])
			{
				salida = 1;
			}

			if (salida == 0)
			{
				return (i);
			}
	}
	return (i);
}
