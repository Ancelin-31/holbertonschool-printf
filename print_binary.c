#include <stdarg.h>
#include "main.h"

/**
 *printbinary - convert and prints in binary an usigned int
 *@args: arguments keep to print is value
 *Return: size of args
 */

int printbinary(va_list args)
{
	unsigned int num = va_arg(args, int);
	int length = 0, i = 0;
	char digit[32];		/*initialisation variables*/

	if (num == 0)		/*check if NULL*/
	{
		_putchar('0');
		length++;
	}
	while (num > 0)		/*convert in binary in reverse*/
	{
		digit[i] = num % 2 + 48;
		num /= 2;
		i++;
		length++;
	}
	while (i--)		/*print digit element in reverse*/
	{
		_putchar(digit[i]);
	}
	return (length);	/*return size in bytes*/
}
