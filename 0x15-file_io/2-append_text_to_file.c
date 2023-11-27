#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
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
return (1);
}
return (1);
}

