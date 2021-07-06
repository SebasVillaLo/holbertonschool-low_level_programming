#include "holberton.h"
#include <stddef.h>
/**
 * compare - prints buffer in hexa
 * @haystack: Character
 * @needle: Character
 * Return: Nothing.
 */
int compare(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (haystack[i] == '\0')
			return (0);
		if (haystack[i] != needle[i])
			return (0);
	}
	return (1);
}

/**
 * _strstr - prints buffer in hexa 2
 * @haystack: Character
 * @needle: Character
 * Description: finds first instance of needle in haystack
 * Return: Nothing.
 **/

char *_strstr(char *haystack, char *needle)
{
	int k;

	if (needle[0] == '\0')
		return (haystack);

	for (k = 0; haystack[k] != '\0'; k++)
	{
		if (needle[0] == haystack[k])
		{
			if (compare(&haystack[k], needle) == 1)
				return (&haystack[k]);
		}
	}
	return (NULL);
}
