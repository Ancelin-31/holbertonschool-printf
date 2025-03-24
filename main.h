#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct function
{
	char id;
	void (*fptr)(va_list *args);
} function_t;

void _putchar(char);
int printchar(va_list args);
int printpercent(va_list args);
int printstring(va_list args);
int printint(va_list args);
int printdecimal(va_list args);

#endif
