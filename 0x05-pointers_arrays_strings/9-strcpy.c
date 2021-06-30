#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - check the code for Holberton School students.
* @dest: character
* @src: character
* Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (i);
}
