#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - Creates a file with specific permissions and writes text to.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
ssize_t bytesWritten = write(fd, text_content, strlen(text_content));
close(fd);
if (bytesWritten == -1 || (size_t)bytesWritten != strlen(text_content))
{
return (-1);
}
}
else
{
close(fd);
}
return (1);
}

