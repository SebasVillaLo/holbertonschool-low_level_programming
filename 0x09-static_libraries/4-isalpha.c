#include "holberton.h"

/**
* _isalpha - Funtion
* @c: char ascii in int
* Return: On success 1.
* On error, -1 is returned
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
