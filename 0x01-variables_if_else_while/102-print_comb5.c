#include <stdio.h>
/**
 * main - entry block
 * Return: 0 (success)
 */
int main(void)
{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = i + 1; p < 100; p++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(p / 10 + '0');
			putchar(p % 10 + '0');
			if (i != 98 || p != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
