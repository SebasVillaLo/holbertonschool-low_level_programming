#include "holberton.h"
/**
* _puts - Funtion
* @str: pointer
* Return: Always 0 (Success)
*/
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
