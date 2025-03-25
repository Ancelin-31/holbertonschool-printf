#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct function
{
	char id;
	int (*fptr)(va_list args);
} function_t;

int _putchar(char c);
int printchar(va_list args);
int printpercent(va_list args);
int printstring(va_list args);
int printint(va_list args);
int printdecimal(va_list args);
int _printf(const char *format, ...);

#endif
