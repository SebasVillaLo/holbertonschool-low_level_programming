#include "main.h"
/**
 * read_textfile - leer y imprimir
 * @filename: nombre del file
 * @letters: letras
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	ssize_t ar = 0, wf = 0, rf = 0;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	ar = open(filename, O_RDONLY);
	rf = read(ar, buf, letters);
	wf = write(STDOUT_FILENO, buf, rf);

	if (ar == -1)
	return (0);
	if (rf == -1)
	return (0);
	if (wf == -1)
	return (0);

	close(ar);

	free(buf);
	return (rf);
}
