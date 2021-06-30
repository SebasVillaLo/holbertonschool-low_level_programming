#include "holberton.h"
/**
* puts_half - check the code for Holberton School students.
* @str: character
* Return: Always 0
*/
void puts_half(char *str)
{
	char *i = str;
	int j = 0;

	while (*str != '\0')
	{
		j = j + 1;
		str = str + 1;
	}
	str--;

	i += (j % 2) ? (j + 1) / 2 : (j) / 2;

	while (i <= str)
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');
}
