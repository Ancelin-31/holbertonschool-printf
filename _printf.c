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
	int i = 0, j, lenght = 0;
	function_t function[] = {
		{'c', printchar}, {'s', printstring}, {'%', printpercent},
		{'i', printint}, {'d', printint}, {'\0', NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			j = 0;
			while (function[j].id)
			{
				if (format[i + 1] == function[j].id)
				{
					lenght += function[j].fptr(args);
					i += 2;
					break;
				}
				j++;
			}
			if (function[j].id == '\0')
			{
				_putchar(format[i]), _putchar(format[i + 1]);
				lenght += 2, i += 2;
			}
		}
		else
		{
			_putchar(format[i]), i++, lenght++;
		}
	}
	va_end(args);
	return (lenght);
}
