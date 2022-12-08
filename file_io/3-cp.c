#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 *@argc: variable integer
 *@argv: matriz char
 *Return: integer
 */
int main(int argc, char **argv)
{
	int fd = 0, fd_to = 0, close_status = 0, i;
	size_t bytes = 1;
	char *file_from = NULL, file_to = NULL, buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, 0_CREAT | 0_RWR | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		exit(99);
	}
	for (i = 0; i < 1024; i++)
	{
		buff[i] = '\0';
	}
	while (bytes)
	{
		bytes = read(fd, buff, 1024);
		write(fd_to, buff, bytes);
	}
	close_status = close(fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %d\n", fd_to);
		exit(100);
	}
	return (0);
}
