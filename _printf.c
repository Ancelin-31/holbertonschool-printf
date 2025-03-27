#include "main.h"
#include <stdarg.h>

/**
 *_printf - Basic functions of printf
 *@format: use to keep type of variable to print
 *Return: 0 if success
 */

int _printf(const char *format, ...)
{
	va_list args; /* declares the va_list of arguments */
	int length = 0;

	if (format == NULL)
		return (-1);

/**
 * initialization of arguments and format, executes the function
 * "get_function" and returns the size in bytes of the string
 */
	va_start(args, format);

	length = get_function(format, args);
	va_end(args);
	return (length);
}
