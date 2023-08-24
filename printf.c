#include "main.h"
/**
 * _printf - custom printf
 * @format: argument1
 *
 * Return: charCount
 */
int _printf(const char *format, ...)
{
	int charCount = 0;
	int i = 0;
	va_list args;
	char ch;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ch = format[i];

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
}
