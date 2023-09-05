#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>

#define BUFSIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char **argv);
void close_files(int fd_from, int fd_to);
void copy_file(int fd_from, int fd_to, char *file_to);
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to);
void check_args(int argc);

#endif
