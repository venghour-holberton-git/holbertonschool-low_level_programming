#include "main.h"

/**
 * create_file - create file
 * @filename: filename
 * @text_content: content inside the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (0);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		write(fd, text_content, len);
	}
	return (1);
}
