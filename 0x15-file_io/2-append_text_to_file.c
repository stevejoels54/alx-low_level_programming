#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, lines;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[lines] != '\0')
	{
		lines++;
	}

	write_file = write(open_file, text_content, lines);
	if (write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
