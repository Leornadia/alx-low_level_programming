#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFSIZE 1024
/**
 * error_handler - handles the error messages and exits with code
 * @code: the error code
 * @file: the file name
 * @fd: the file descriptor
 */
void error_handler(int code, char *file, int fd)
{
switch (code)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
break;
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
break;
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
break;
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
break;
default:
break;
}
exit(code);
}
/**
 * copy_file - copies the content of a file to another file
 * @file_from: the source file name
 * @file_to: the destination file name
 * Return: 0 on success, exit with code on failure
 */
int copy_file(char *file_from, char *file_to)
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFSIZE];
mode_t mode;
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
error_handler(98, file_from, 0);
mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd_to == -1)
{
close(fd_from);
error_handler(99, file_to, 0);
}
while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
error_handler(99, file_to, 0);
}
}
if (bytes_read == -1)
{
close(fd_from);
close(fd_to);
error_handler(98, file_from, 0);
}
if (close(fd_from) == -1)
error_handler(100, NULL, fd_from);
if (close(fd_to) == -1)
error_handler(100, NULL, fd_to);
return (0);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
if (argc != 3)
error_handler(97, NULL, 0);
return (copy_file(argv[1], argv[2]));
}
