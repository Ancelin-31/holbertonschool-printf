#include <stdarg.h>
#include "main.h"

/**
 *printchar - function who's print only one char
 *@args: Keep arg to print
 *return: no return
*/

int printchar(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 *
 *
 *
*/

int printstring(va_list args)
{
	char *str = va_arg(args, char *);
	int lenght = 0;

	while (*str)
	{
		_putchar(*str++);
		lenght++;
	}
	return (lenght);
}

/**
 *printpercent - print % if %% in _printf
 *return: 1
 */

int printpercent()
{
	_putchar('%');
	return (1);
}
