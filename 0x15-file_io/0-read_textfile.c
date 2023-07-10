;:#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 *                 prints it to the POSIX standard output
 * @filename: a pointer
 * @letters: number of letters the function should read and print
 *
 * Return: 0 if filename is NULL
 *           if the file can not be opened or read
 *           if write fails or does not write the expected amount of bytes
 *           Otherwise - actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
