#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: Pointer to name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on Success or -1 on Failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t content_length;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(fd, text_content, content_length);

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
