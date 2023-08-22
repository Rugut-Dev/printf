#include "main.h"

int _printf(const char *format, ...)
{
	int charCount = 0;
	int i = 0;

	va_list args;



	va_start(args, format);

	while (format[i] != '\0') {

		if (format[i] == '%') {
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
}
