#include "holberton.h"

/**
 * print_diagsums - prints buffer in hexa
 * @a: Character
 * @size: Character
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int suma1, suma2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		suma1 = suma1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		suma2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", suma1, suma2);
}
