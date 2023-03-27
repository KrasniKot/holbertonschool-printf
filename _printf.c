#include "main.h"

/**
 *
 *
 */
int _printf(const char *format, ...)
{
	type opciones[] = {
		{'c', character},
		{'s', string},
		{'%', percent};
		{NULL, NULL}
	};

	va_list args;
	int i = 0, j = 0;

	va_start(args, format);
	while (format && format[i])
	{	i++;
		opciones[j].function[args];
	}
