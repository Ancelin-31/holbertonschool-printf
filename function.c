#include <stdarg.h>
#include "main.h"

/**
 *printchar - function who's print only one char
 *@args: Keep arg to print
 *Return: no return
*/

int printchar(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 *printstring - print if char * is called
 *@args: to fetch arg in parameter
 *Return: lenght of string
*/

int printstring(va_list args)
{
	char *str = va_arg(args, char *);
	int lenght = 0;

	if (*str)
	{
		while (*str)
		{
			_putchar(*str++);
			lenght++;
		}
		return (lenght);
	}
	return ('\0');
}

/**
 *printpercent - print % if is asked
 *@args: unused args to print %
 *Return: 1
 */

int printpercent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
 *printint - print a integer
 *@args: arguments keep to print is value
 *Return: size of args
 */

int printint(va_list args)
{
	int num = va_arg(args, int);
	int lenght = 0, i = 0;
	char digit[11];

	if (num < 0)
	{
		_putchar('-');
		lenght++;
		num *= -1;
	}
	while (num > 0)
	{
		digit[i] = num % 10 + 48;
		num /= 10;
		i++;
		lenght++;
	}

	while (i--)
	{
		_putchar(digit[i]);
	}
	return (lenght);
}
