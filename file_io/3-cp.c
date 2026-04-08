#include "main.h"

int main(int argc, char **argv)
{
	int fd;
	int fd2;
	ssize_t read_bytes;
	char buffer[1024];

	if (argc < 3)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	read_bytes = read(fd, buffer, sizeof(buffer));
	fd2 = open(argv[2], O_CREAT | O_WRONLY, 0666);
	if (fd2 == -1)
		return (0);
	write(fd2, buffer, read_bytes);
	return (0);
}
