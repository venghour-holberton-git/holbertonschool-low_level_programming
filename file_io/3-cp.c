#include "main.h"

/**
 * main - program entry point
 * @argc: amount of argument
 * @argv: array of argument
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int fd;
	int fd2;
	ssize_t read_bytes;
	char buffer[1024];

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	read_bytes = read(fd, buffer, sizeof(buffer));
	fd2 = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (read_bytes > 0)
	{
		write(fd2, buffer, read_bytes);
		read_bytes = read(fd, buffer, sizeof(buffer));
	}
	return (0);
}
