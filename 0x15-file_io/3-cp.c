#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1024
/**
 * print_error_and_exit - Print error message and exit program.
 * @exit_code: The exit code.
 * @error_message: The error message.
 * @file_name: The name of the file.
 */
void print_error_and_exit(int exit_code, const char *error_message,
const char *file_name)
{
dprintf(STDERR_FILENO, "%s: %s\n", error_message, file_name);
exit(exit_code);
}
/**
 * copy_file - Copy the content of one file to another.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 */
void copy_file(int fd_from, int fd_to)
{
ssize_t bytes_read, bytes_written;
char buffer[BUF_SIZE];
while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
print_error_and_exit(99, "Error: Can't write to file", "destination file");
}
}
if (bytes_read == -1)
{
close(fd_from);
close(fd_to);
print_error_and_exit(98, "Error: Can't read from file", "source file");
}
}
/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, otherwise an exit code.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
print_error_and_exit(98, "Error: Can't read from file", argv[1]);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
print_error_and_exit(99, "Error: Can't write to file", argv[2]);
}
copy_file(fd_from, fd_to);
if (close(fd_from) == -1)
{
print_error_and_exit(100, "Error: Can't close fd", argv[1]);
}
if (close(fd_to) == -1)
{
print_error_and_exit(100, "Error: Can't close fd", argv[2]);
}
return (0);
}

