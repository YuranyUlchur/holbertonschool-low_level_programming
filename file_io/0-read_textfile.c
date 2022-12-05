#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to the POSIX
 *@letters: variable size
 *@filename: pointer const char
 *Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1000];
	ssize_t len = letters;

	if (filename)
	{

		fd = open(filename, O_RDONLY);

		if (filename == NULL)
			return (0);

		while ((letters = read(fd, buf, len)))
			write(1, &fd, 1);
		close(fd);

		return (len);
	}
	return (0);
}
