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
	char *filepath;
	size_t len;

	filepath = malloc(strlen("./") + strlen(filename));
	strcpy(filepath, "./");
	strcat(filepath, filename);
	
	fd = open(filepath, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		write(fd, text_content, len);
	}
	return (len);
}
