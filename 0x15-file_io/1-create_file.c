#include "main.h"
/**
 * create_file - crear un nuevo archivo
 * @filename: nombre del file
 * @text_content: contenido del texto
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t ar = 0, len = 0, wf = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	ar = open(filename, O_CREAT | O_WRONLY);
	if (ar == -1)
	{
		return (-1);
	}
	
	write(ar, text_content, len);
	if (wf == -1)
	{
		return (-1);
	}

	close(ar);
	return(1);
}
