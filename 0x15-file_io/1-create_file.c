#include "main.h"
#include <stdio.h>

/**
 * create_file - Creates a file
 * @filename: Name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, lines;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (open_file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (lines = 0; text_content[lines] != '\0'; lines++)
		;

	write_file = write(open_file, text_content, lines);
	if (write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
