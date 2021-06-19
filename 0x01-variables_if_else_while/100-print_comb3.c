#include <stdio.h>
/**
 *   * main - entry block
 *     * Return: 0 (success)
 *     **/
int main(void)
{
	int i, p;

	for (i = '0'; i <= '9'; i++)
	{
	for (p = i + 1; p <= '9'; p++)
	{
		putchar(i);
		putchar(p);
		if (i != '8' || p != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
}
	putchar('\n');
	return (0);
}
