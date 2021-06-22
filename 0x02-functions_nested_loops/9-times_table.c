#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 * @void - no argument
 */
void times_table(void)
{
	int i, c, n;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			n = i * j;
			if (c == 0)
			{
				_putchar(n + '0');
			}
			else if (n <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
