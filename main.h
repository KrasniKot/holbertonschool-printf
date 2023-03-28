#ifndef _printf_
#define _printf_
#include <stdio.h>
#include <stdarg.h>

typedef struct fc
{
	char option;
	int(*function)(va_list arg);
} type;

int _printf(const char *format, ...);
int character(va_list arg);
int string(va_list arg);
int percent(va_list arg);
int pch(char c);

#endif
