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
	char name[] = "Ancelin";
	int age = 31;

	/* Exemple to print a string */
	_printf("Hello ! We are %s and %s.\n", name, "Jeffrey");

	/* Exemple to print a number */
	_printf("We are respectively %d and %i.\n", age, 37);

	/* Exemple to print a character and % */
	_printf("We are %c%c-developer and we are at 200%%\n", 'C', 'o');
	return (0);
}

/**
 * Output:
 * Hello ! We are Ancelin and Jeffrey.
 * We are respectively 31 and 37.
 * We are Co-developer and we are at 200%.
*/
