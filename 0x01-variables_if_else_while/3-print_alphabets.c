#include <stdio.h>
/**
 * main - entry block
 * Return: 0 (success)
 */
int main(void)
{
	char p, m;

	for (p = 'a'; p <= 'z'; p++)
		putchar(p);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
