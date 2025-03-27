#include "main.h"

/**
 * get_function - chooses the right function to execute
 * based on a specifier character following a '%'
 * @format: use to keep type of variable to print
 * @args: arguments to print
 * Return: 0 if success
 */

int get_function(const char *format, va_list args)
{
	int i = 0, j, length = 0;
	function_t function[] = {
		{'c', printchar}, {'b', printbinary},
		{'s', printstring},
		{'%', printpercent},
		{'i', printint},
		{'d', printint},
		{'\0', NULL}
	};

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
					length += function[j].fptr(args);
					i += 2;
					break;
				}
				j++;
			}
			if (function[j].id == '\0')
			{
				_putchar(format[i]), _putchar(format[i + 1]);
				length += 2, i += 2;
			}
		}
		else
		{
			_putchar(format[i]), i++, length++;
		}
	}
	return (length);
}
