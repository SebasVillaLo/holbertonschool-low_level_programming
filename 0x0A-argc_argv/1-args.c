#include <stdio.h>

/**
 * main - prints buffer in hexa
 * @argc: Character
 * @argv: Character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
