#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int main(void)
{
	char* str = "Holberton!";
	int i;

        while (str[i] != '\0')
        {
                _putchar(str[i]);
                i++;
        }
        _putchar('\n');
	return (0);

}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
