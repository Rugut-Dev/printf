#include "main.h"
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
}
