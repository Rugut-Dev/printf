#include "main.h"
/**
* find_appr_func - iterates thru functions
* @identifier: char
*
* Return: Function_pointer
*/

function_pointer find_appr_func(char identifier)
{
	int i;
	func_x func_array[] = {
		{'c', print_generic},
		{'s', print_generic}
		{'0', NULL}
	};
	for (i = 0; func_array[i].id != '0'; i++)
	{
		if (identifier == func_array[i].id)
		{
			return (func_array[i].fp);
		}
		return (func_array[i].fp);
	}
}
