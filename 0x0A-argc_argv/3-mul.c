#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints buffer in hexa
 * @argc: Character
 * @argv: Character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r1, r2;

	r1 = r2 = 0;
	if (argc == 3)
	{
		r1 = atoi(argv[1]);
		r2 = atoi(argv[2]);
		printf("%d\n", r1 * r2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
