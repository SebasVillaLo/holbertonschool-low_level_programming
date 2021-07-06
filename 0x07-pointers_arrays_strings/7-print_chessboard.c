#include "holberton.h"

/**
 * print_chessboard - prints buffer in hexa
 * @a: Character
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{

	int i, k;

	for (k = 0; k < 8; k++)
	{
		for (i = 0; i <= 8; i++)
		{
			if (i == 8)
				_putchar('\n');
			else
				_putchar(a[k][i]);
		}
	}
}
