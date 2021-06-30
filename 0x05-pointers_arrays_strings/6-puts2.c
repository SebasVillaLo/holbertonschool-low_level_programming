#include "holberton.h"
#include <stdio.h>
/**
* puts2 - check the code for Holberton School students.
* @str: character
* Return: Always 0 (Success)
*/
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if ((i % 2) == 0)
			_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
