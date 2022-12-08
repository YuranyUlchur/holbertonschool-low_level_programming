#include "main.h"

/**
 * create_file -  function that creates a file.
 *@text_content: variable char
 *@filename: pointer const char
 *Return: ssize_t
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (text_content)
		len = strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
