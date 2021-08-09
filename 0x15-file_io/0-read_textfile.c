#include "main.h"
/**
 * read_textfile - leer y imprimir
 * @filename: nombre del file
 * @letters: letras
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int ar = 0, wf = 0, rf = 0, cf = 0;

	if (buf == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	ar = open(filename, O_RDONLY);
	rf = read(ar, buf, letters);
	wf = write(STDOUT_FILENO, buf, rf);

	if (ar == -1)
	return (0);
	if (rf == -1)
	return (0);
	if (wf == -1)
	return (0);

	cf = close(ar);
	if (cf == -1)
	return (0);

	free(buf);
	return (rf);
}
