#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - Funtion
* @dest: pointer
* @src: pointer
* Return: Always 0 (Success)
*/
char *_strcpy(char *dest, char *src)
{
	char *first = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (first);
}

