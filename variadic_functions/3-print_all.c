#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    unsigned int len = 0;
    char *sep = ", ";

    va_start(args, format);

		while (format[len])
		{
			len++;
		}
        	while (format[i])
        	{
			
		switch (format[i])
		{
			case 'c':
				sep = ", ";
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				sep = ", ";
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				sep = ", ";
				printf("%f", va_arg(args, double));
				break;
			case 's':
				sep = ", ";
				char *str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				sep = "";
				break;
		}
		if (i != len - 1)
		{
			printf("%s", sep);
		}
		i++;
		}
	va_end(args);
	putchar('\n');
}
