#include <stdio.h>
/**
 * main - entry block
 * Return: 0 (success)
 */
int main(void)
{
int j, i, k;

for (i = '0'; i <= '9'; i++)
{
	for (k = i + 1; k <= '9'; k++)
	{
		for (j = k + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(k);
			putchar(j);
			if (i != '7' || j != '8' || k != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
