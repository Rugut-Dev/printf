#include "main.h"
#include <stdarg.h>

/**
 * print_s - prints strings
 *
 * Return: num of char
 */

int print_s(va_list args)
{
        int i;

        va_start(args, n);

        char *str = va_arg(args, char *);

                if (str == NULL)
                {
                        _putchar("(null)");
                }
                //loop thru the string, and increase count
                {
                        _putchar("%s", str);
                }
        va_end(args);
        _putchar("\n");
}
