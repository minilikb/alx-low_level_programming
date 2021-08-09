#include "holberton.h"

/**
 * read_textfile - reads and prints a textfile
 * @filename: the name of the file
 * @letters: the size of letters to be read
 *
 * Return: -1 in failure and letters actually read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_res, write_res;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);

	read_res = read(fd, buff, letters);
	if (read_res == -1)
		return (0);
	buff[letters] = '\0';
	write_res = write(1, buff, read_res);
	if (write_res == -1)
		return (0);

	close(fd);
	free(buff);
	return (write_res);
}
