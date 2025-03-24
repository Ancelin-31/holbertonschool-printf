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
void printchar(va_list args);
void printpercent(va_list args);
void printstring(va_list args);
void printint(va_list args);
void printdecimal(va_list args);

#endif
