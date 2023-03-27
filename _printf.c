#include "main.h"

void percent(va_list args)
{

}

/**
 *
 *
 */
int _printf(const char *format, ...)
{
	type opciones[] = {
		{%, percent};
	};
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{	i++;
		opciones[j].function[args];
	}
