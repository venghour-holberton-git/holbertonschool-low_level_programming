#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    unsigned int len = 0;
    char *sep = "";
    char *str;

    va_start(args, format);
	if (format)
	{
		while (format[len])
		{
			len++;
		}
        	while (format[i])
        	{
			
			switch (format[i])
			{
			case 'c':
				printf("%s", sep);
				sep = ", ";
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%s", sep);
				sep = ", ";
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%s", sep);
				sep = ", ";
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", sep);
				sep = ", ";
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				printf("%s", sep);
				sep = "";
				break;
			}
			i++;
		}
		va_end(args);
		putchar('\n');
	}
}
