#include "main.h"
<<<<<<< HEAD
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
=======
/**
 * print_generic - functions to check
 * @args: arguments
 *
 * Return: int
 */
int print_generic(va_list args)
{
	int charCount = 0;
	char specifier = va_arg(args, int);

	if (specifier == 'c')
	{
		char c = va_arg(args, int);

		_putchar(c);
		return (1);
	}
	else if (specifier == 's')
	{
		char *str = va_arg(args, char *);

		while (*str != '\0')
		{
			_putchar(*str);
			str++;
			charCount++;
		}
		return (charCount);
	}
	return (0);
>>>>>>> edbde20c3e4ba4c4c957f44eed8cdc33785b38b8
}
