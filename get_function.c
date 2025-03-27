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
	/* 
	 * lists all the function in the repository to print arguments
	 * and associate each of them with a particular id
	 */
	function_t function[] = {
		{'c', printchar}, {'b', printbinary},
		{'s', printstring},
		{'%', printpercent},
		{'i', printint},
		{'d', printint},
		{'\0', NULL}
	};

	while (format[i]) /*reads argument*/
	{
		if (format[i] == '%') /*checks the condition to "print" functions*/
		{
			if (format[i + 1] == '\0')
				return (-1);
			j = 0;
			while (function[j].id) 
/**
 * browses the list of functions until the corresponding 
 * id is found, then calls the associated function
 */
			{
				if (format[i + 1] == function[j].id)
				{
					length += function[j].fptr(args);
					i += 2;
					break;
				}
				j++;
			}
			if (function[j].id == '\0') /* if there is no corresponding id, prints the string */
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
