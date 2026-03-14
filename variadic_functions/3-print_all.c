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
            if (sep)
                printf("%c", sep);

            if (format[i] == 'c')
                printf("%c", va_arg(args, int));
            if (format[i] == 'i')
                printf("%d", va_arg(args, int));
            if (format[i] == 'f')
                printf("%f", va_arg(args, double));
            if (format[i] == 's')
            {
                str = va_arg(args, char *);
                if (!str)
                    str = "(nil)";
                printf("%s", str);
            }

            sep = ',';
            i++;
        }
    }

    va_end(args);
    putchar('\n');
}
