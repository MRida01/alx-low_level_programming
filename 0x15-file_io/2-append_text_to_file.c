#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, written_bytes, file_exists;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
written_bytes = write(fd, text_content, strlen(text_content));
if (written_bytes == -1)
{
close(fd);
return (-1);
}
}
file_exists = close(fd);
return (file_exists == 0 ? 1 : -1);
}
