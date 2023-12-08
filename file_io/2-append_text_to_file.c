#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on Success and -1 on Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);

	return (1);
}
