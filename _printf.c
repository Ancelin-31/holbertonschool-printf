#include "main.h"
#include <stdarg.h>

/**
 *_printf - Basic functions of printf
 *@format: use to keep type of variable to print
 *Return: 0 if success, 1 if error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j;
	int lenght = 0;
	function_t function[] = {
		{'c', printchar},
		{'s', printstring},
		{'%', printpercent},
		{'i', printint},
		{'d', printint},
		{'\0', NULL}
	};

	if (format == NULL)
		return (1);

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			i++;
			while (function[j].id)
			{
				if (format[i] == function[j].id)
				{
					lenght += function[j].fptr(args);
					break;
				}
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
			lenght++;
		}
	}
	va_end(args);
	return (lenght);
}
