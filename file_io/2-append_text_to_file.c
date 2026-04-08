#include "main.h"

/**
 * append_text_to_file - append text to the end of file
 * @filename: file path
 * @text_content: content to append
 * Return: 1 on sucess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;

	fd = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
	{
		len++;
	}
	if (fd == -1)
		return (-1);
	write (fd, text_content, len);
	return (1);	
}
