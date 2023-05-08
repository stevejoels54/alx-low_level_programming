#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - prints error message to the standard error.
 * @msg: Error message to be printed.
 * @filename: Name of the file with error source.
 * @code: exit code to be returned.
 *
 * Return: Nothing.
 */

void print_error(char *msg, char *filename, int code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(code);
}

/**
 * close_file - closes a file descriptor.
 * @fd: File descriptor to be closed.
 * @filename: Name of the file with error source.
 *
 * Return: Nothing.
 */

void close_file(int fd, char *filename)
{
	if (close(fd) == -1)
		print_error("Error: Can't close fd %d\n", filename, 100);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: Argument count is incorrect: exit code-97.
 *              file_from does not exist or cannot be read: exit code-98.
 *              file_to cannot be created or written to: exit code -99.
 *              file_to or file_from cannot be closed: exit code-100.
 *
 * Return: 0 if success.
 */

int main(int argc, char **argv)
{
	int read_from, write_to;
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes, written_bytes;

	if (argc != 3)
		print_error("Usage: %s file_from file_to\n", argv[0], 97);

	read_from = open(argv[1], O_RDONLY);
	if (read_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);

	write_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (write_to == -1)
		print_error("Error: Can't write to %s\n", argv[2], 99);

	while ((read_bytes = read(read_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(write_to, buffer, read_bytes);
		if (written_bytes == -1)
			print_error("Error: Can't write to %s\n", argv[2], 99);
	}

	if (read_bytes == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);

	close_file(read_from, argv[1]);
	close_file(write_to, argv[2]);

	return (0);
}
