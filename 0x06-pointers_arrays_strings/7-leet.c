#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 * @s: character
 * Return: Always 0
 */
char *leet(char *s)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (s[i] == subs[j])
				s[i] = le[j / 2];
	}
	return (s);
}
