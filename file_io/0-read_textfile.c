#include "main.h"

/**
 * read_textfile - This function reads a text file and
 * prints it to the POSIX standard output
 * @filename: Pointer to the file containing the letters to be read
 * @letters: The number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/* fd stands for file descriptor */
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);
	return (bytes_written);
}
