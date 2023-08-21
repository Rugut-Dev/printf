#include "main.h"

/**
 * _printf - custom printf
 * @format: char pointer
 * @...: variadic args
 *
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	int char_iterator = 0;

	va_list args_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_iterator++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				char_iterator++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args_list, int);

				write(1, &c, 1);
				char_iterator++;
			}
			else if (*format == 's')
			{
				char *string = va_arg(args_list, char*);

				char_iterator = strlen(string);

				write(1, string, strlen(string));
			}

		}

		format++;
	}

	va_end(args_list);

	return (char_iterator);
}
