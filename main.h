#ifndef _printf_
#define _printf_
#include <stdio.h>

typedef struct fc
{
	char *option;
	void (*function)(valist args);
} type;

int _printf(const char *format, ...);

#endif
