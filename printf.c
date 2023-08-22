#include "main.h"
/**
 * _printf - custom printf
<<<<<<< HEAD
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
                        _putchar(format);
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
                                char string = va_arg(args_list, char);

                                char_iterator = strlen(string);
                                write(1, string, strlen(string));
                        }
                }
                format++;
        }
        va_end(args_list);
        return (char_iterator);
=======
 * @format: argument
 *@...: va
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int charCount = 0;
	int i = 0;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			char ch = format[i];

			i++;
			if (ch != '\0')
			{
				int (*p_func)(va_list) = find_appr_func(ch);

				if (p_func != NULL)
				{
					charCount = charCount + p_func(args);
				}
			}

		}
		else
		{
			_putchar(format[i]);
			charCount++;
		}
		i++;
	}
	va_end(args);
	return (charCount);
>>>>>>> edbde20c3e4ba4c4c957f44eed8cdc33785b38b8
}
