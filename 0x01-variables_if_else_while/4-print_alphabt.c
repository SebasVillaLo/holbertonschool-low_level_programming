#include <stdio.h>
/**
 *   * main - entry block
 *     *Return: 0
 *     **/
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
	if (p != 'e' && p != 'q')
		putchar(p);
	}
	putchar('\n');
	return (0);
}
