#include "main.h"
#include <stdarg.h>

/**
 *printf - print all with specifier
 *@format: use to keep type of variable to print
 *Return: 0 if success
 */

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	op_t function[] = {
		{'c',printchar},
		{'s', printstring},
		{'%', printpercent},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%' && format[i + 1])
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
}
