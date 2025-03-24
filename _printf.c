#include "main.h"
#include <stdarg.h>

/**
 *_printf - Basic functions of printf
 *@format: use to keep type of variable to print
 *Return: 0 if success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j;
	function_t function[] = {
		{'c', printchar},
		{'s', printstring},
		{'%', printpercent},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%' && format[i + 1])
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
}
