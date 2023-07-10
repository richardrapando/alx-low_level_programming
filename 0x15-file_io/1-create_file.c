#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 *
 * Return: -1 if filename is NULL
 *         Otherwise - create an empty file if text_content is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, leng);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
