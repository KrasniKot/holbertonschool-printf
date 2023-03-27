#ifndef _printf_
#define _printf_
#include <stdio.h>
#include <stdarg.h>

typedef struct fc
{
	char option;
	void (*function)(va_list args);
} type;

int _printf(const char *format, ...);
void character(va_list args);
void string(va_list args);
void percent(va_list args);
int pch(char c);

#endif
