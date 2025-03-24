#include "main.h"
#include <stdarg.h>

/**
<<<<<<< HEAD
 *printf - print all with specifier
=======
 *_printf - Basic functions of printf
>>>>>>> Jeff
 *@format: use to keep type of variable to print
 *Return: 0 if success
 */

<<<<<<< HEAD
int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	op_t function[] = {
		{'c',printchar},
=======
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j;
	function_t function[] = {
		{'c', printchar},
>>>>>>> Jeff
		{'s', printstring},
		{'%', printpercent},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%' && format[i + 1])
<<<<<<< HEAD
		while (function[j].id)
		{
			if (format[i] == function[j].id)
			{
				function[j].fptr(args);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
=======
		{
			i++;
			while (function[j].id)
			{
				if (format[i] == function[j].id)
				{
					function[j].fptr(args);
					break;
				}
			j++;
			}
		}
		_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (i);
>>>>>>> Jeff
}
