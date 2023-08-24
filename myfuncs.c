#include "main.h"

#define UNUSED(x) (void)(x)
/**
 * print_generic - handles c
 * @args: args
 *
 * Return: int
 */
int print_generic(va_list args)
{
	char specifier = va_arg(args, int);

	if (specifier != '\0')
	{
		_putchar(specifier);
	}
	return (1);
}
/**
 * print_s - handles s
 * @args: args
 *
 * Return: int
 */

int print_s(va_list args)
{
	int charCount = 0;
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		charCount++;
	}
	return (charCount);
}

/**
 * print_percent - handles %
 * @args: args
 *
 * Return: int
 */
int print_percent(va_list args)
{
	UNUSED(args);
	_putchar('%');
	return (1);
}
