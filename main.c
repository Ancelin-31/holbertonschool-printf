#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int age = 25;
	char name[] = "Alice";

	_printf("%c%c ! My name is %s, i'm %d years\n", 'H', 'i', name, age);
	
	return (0);
}

/**
 * Output:
 * Hi ! My name is Alice, i'm 25 years
*/
