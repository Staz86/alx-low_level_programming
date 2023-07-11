#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text to the end of a file
 *
 * @filename: The name of the file to append to
 * @text_content: The text to append to the file
 *
 * Return: 1 on success, or -1 on failure
 *         If the file does not exist, or the user does not have permission to
 *         write to it, -1 is returned
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

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
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
