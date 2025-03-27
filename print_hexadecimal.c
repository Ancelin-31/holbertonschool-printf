#include <stdarg.h>
#include "main.h"

/**
 *print_hex_upper - convert and prints in hexadecimal in uppercase
 *an unsigned int
 *@args: arguments keep to print is value
 *Return: size of args
 */

int print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, int);
	unsigned int keep_hexa = 0;
	int length = 0, i = 0;
	char digit[32];		/*initialisation variables*/

	if (num == 0)		/*check if NULL*/
	{
		_putchar('0');
		length++;
	}
	while (num > 0)		/*loop num and feed keep_hexa*/
	{
		keep_hexa = num % 16;
		if (keep_hexa > 9)
		{
			digit[i++] = keep_hexa - 10 + 'A';
		}
		else
			digit[i++] = keep_hexa + 48;

		num /= 16;
		length++;
	}
	while (i--)		/*print digit element in reverse*/
	{
		_putchar(digit[i]);
	}
	return (length);	/*return size in bytes*/
}

/**
 *print_hex_low - convert and prints in octal an usigned int
 *@args: arguments keep to print is value
 *Return: size of args
 */

int print_hex_low(va_list args)
{
	unsigned int num = va_arg(args, int);
	unsigned int keep_hexa = 0;
	int length = 0, i = 0;
	char digit[32];

	if (num == 0)
	{
		_putchar('0');
		length++;
	}
	while (num > 0)
	{
		keep_hexa = num % 16;
		if (keep_hexa > 9)
		{
			digit[i++] = keep_hexa - 10 + 'a';
		}
		else
			digit[i++] = keep_hexa + 48;
		num /= 16;
		length++;
	}
	while (i--)
	{
		_putchar(digit[i]);
	}
	return (length);
}
