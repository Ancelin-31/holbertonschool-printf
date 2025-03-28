#include <stdarg.h>
#include "main.h"

/**
 *printchar - function that prints only one character
 *@args: Keeps arguments to print
 *Return: 1 (length of printed argument)
*/

int printchar(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c); /*prints the given character*/
	return (1);
}

/**
 *printstring - prints if char * is called
 *@args: to fetch arguments in parameter
 *Return: length of string
*/

int printstring(va_list args)
{
	char *str = va_arg(args, char *);
	int length = 0;

	if (str == NULL)
		str = "(null)";
	while (*str) /*until *str == '\0'*/
	{
		_putchar(*str++); /*prints the string character by character*/
		length++;
	}
	return (length);
}

/**
 *printpercent - print % if is asked
 *@args: unused args to print %
 *Return: 1 (length of argument)
 */

int printpercent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
 *printint - prints an integer if int is aked
 *@args: arguments keep to print is value
 *Return: length of arguments
 */

int printint(va_list args)
{
	int num = va_arg(args, int);
	unsigned int abs;	/* to handle INT_MIN */
	int length = 0, i = 0;
	char digit[10];/*maximum size of a unsigned int*/

	if (num == 0) /* checks if num is NULL */
	{
		_putchar(48);
		length++;
		return (length);
	}
	if (num < 0) /* checks if num is negative */
	{
		_putchar('-');
		length++;
		abs =  num * -1;
	}
	else
		abs = num;

	while (abs > 0)
/*reads abs digit by digit, to put all of them in a buffer in reverse order*/
	{
		digit[i] = abs % 10 + 48;
		abs /= 10;
		i++;
		length++;
	}
	while (i--) /*prints all digits, again in reverse order*/
	{
		_putchar(digit[i]);
	}
	return (length);
}
