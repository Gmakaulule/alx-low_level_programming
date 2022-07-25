#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read files
 * @filename: is the file to read
 * @letters: number of letters
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r_check, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	r_check = read(file, buffer, letters);
	if (r_check == -1)
		return (0);

	count = write(STDOUT_FILENO, buffer, r_check);
	if (count == -1 || r_check != count)
		return (0);

	free(buffer);

	close(file);

	return (count);
}
