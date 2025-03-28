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
	/* test %c %s %% and observe if there is a correct output */
	 _printf("%c", 'S');
	 _printf("%c", '\0');
	 printf("css%ccs%scscscs", 'T', "Test");
	 printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	 _printf("%%");
	 _printf("%!\n");

	 /* test %d %i */
	 _printf("%d == %i\n", 1024, 1024);
	 _printf("iddi%diddiiddi\n", 1024);
	 _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	 /* test %b %o %u %x %X*/

	 _printf("%b", UINT_MAX);
	 _printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	 
    return (0);
}
