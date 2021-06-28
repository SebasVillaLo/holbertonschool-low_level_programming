#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: punter
 * @b: punter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int intercambio;

	intercambio = *a;
	*a = *b;
	*b = intercambio;
}
