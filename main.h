#ifndef _printf_
#define _printf_
#include <stdio.h>
#include <stdarg.h>

typedef struct fc
{
	char option;
	void (*function)(va_list arg);
} type;

int _printf(const char *format, ...);
void character(va_list arg);
void string(va_list arg);
void percent(va_list arg);
int pch(char c);

#endif
