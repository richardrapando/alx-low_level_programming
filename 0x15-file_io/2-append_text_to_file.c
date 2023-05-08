#include "main.h"

/**
 * append_text_to_file - function that appends text at the file end
 * @filename: A pointer to the name of the file
 * @text_content: the NULL terminated string to add at the file end
 *
 * Return: -1 filename is NULL return
 *         1 if the file exists
 *        -1 if the file does not exist
 *        -1 if you do not have the required permissions to write the file
 *         Otherwise - If text_content is NULL, do not add anything to the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, leng);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
