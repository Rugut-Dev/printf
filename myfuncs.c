#include "main.h"

int print_generic(va_list args) {
	int charCount = 0;
	char specifier = va_arg(args, int);
	printf("Debug: Specifier: %c\n", specifier);
	if (specifier == 'c') {
		char c = va_arg(args, int);
		printf("Debug: Char: %c\n", c);
		_putchar(c);
		return 1;
	} else if (specifier == 's') {
		char *str = va_arg(args, char *);
		printf("Debug: String: %s\n", str);

		while (*str != '\0') {
			_putchar(*str);
			str++;
			charCount++;
		}
		return charCount;
	}
	return 0;
}
