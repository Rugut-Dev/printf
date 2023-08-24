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

/**
 * print_d - handles d
 * @args: args
 *
 * Return: int
 */
int print_d(va_list args)
{
	int num = va_arg(args, int);
	char num_str[20];
	char *str = num_str;
	int charCount;

	snprintf(num_str, sizeof(num_str), "%d", num);

	charCount = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		charCount++;
	}

	return (charCount);
}

/**
 * print_i - handles i
 * @args: args
 *
 * Return: int
 */
int print_i(va_list args)
{
	int value = va_arg(args, int);
	int charCount = 0;
	char buffer[12];
	int length = sprintf(buffer, "%d", value);
	int i;

	if (value < 0)
	{
		_putchar('-');
		charCount++;
		value = -value;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(buffer[i]);
		charCount++;
	}
	return (charCount);
}
