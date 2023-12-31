#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef int (*function_pointer)(va_list args);

/**
 * struct func - func_x desc
 * @id: id
 * @fp: function pointer
 */
typedef struct func
{
	char id;
	function_pointer fp;
} func_x;

int _printf(const char *format, ...);
int _putchar(char c);
function_pointer find_appr_func(char identifier);
int print_generic(va_list args);
int print_percent(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);

#endif /* MAIN_H */

