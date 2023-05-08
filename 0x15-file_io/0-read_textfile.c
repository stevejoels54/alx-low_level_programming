#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 * @filename: Name of file to read
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file;
	ssize_t read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read_count = read(open_file, buffer, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1)
		return (0);

	free(buffer);
	close(open_file);

	return (write_count);
}
