#include <stdio.h>
/**
 * main - entry block
 * Return: 0 (success)
 **/
int main(void)
{
	int i, p;

	for (p = '0'; p <= '9'; p++)
	{
	for (i = p + 1; i <= '9'; i++)
	{
		putchar(p);
		putchar(i);
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
