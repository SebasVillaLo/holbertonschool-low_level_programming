#include "holberton.h"
#include <stdio.h>
/**
* _strlen - Funtion
* @s: pointer type char
* Return: int
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}

	return (length);
}
