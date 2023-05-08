#ifndef MAIN_H
#define MAIN_H

/*
 * @Desc: Header file containing the function prototypes for the functions
 *
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
void print_error(char *msg, char *filename, int code);
void close_file(int fd, char *filename);
int main(int argc, char **argv);
#endif
