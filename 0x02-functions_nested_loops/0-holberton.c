#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

int main(void)
{
	int c;

	char holberton[] = "Holberton";

	for (c = 0; c < 9; c++)
	{
		putchar(holberton[c]);
	}

	putchar('\n');
	return (0);
}
