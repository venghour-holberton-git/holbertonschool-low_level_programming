#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char sep = 0;

    va_start(args, format);

    if (format)
    {
        while (format[i])
        {
           switch (format[i])
		{
			case: 'c':
				printf("%c", va_arg(args, char);
				break;
			case: 'i':
				printf("%d", va_arg(args, int);
				break;
			case: 'f':
				printf("%f", va_arg(args, float);
				break;
			case: 's':
				printf("%s", va_arg(args, char *);
				break;
		}
	   if (i != n - 1)
		{
	   		printf(", ");
		}
            i++;
        }
    }
    va_end(args);
    putchar('\n');
}
