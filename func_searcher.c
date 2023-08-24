#include "main.h"
/**
 * find_appr_func - checks for teh right function
 * @identifier: specifier
 *
 * Return: fp
 */
function_pointer find_appr_func(char identifier)
{
	int i;
	func_x func_array[] = {
		{'c', print_generic},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_d},
		{'i', print_i},
		{'0', NULL}
	};

	for (i = 0; func_array[i].id != '0'; i++)
	{
		if (identifier == func_array[i].id)
		{
			return (func_array[i].fp);
		}
	}
	return (func_array[i].fp);
}
