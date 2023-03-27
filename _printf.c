#include "main.h"

/**
 *
 *
 */
int _printf(const char *format, ...)
{
	type fopt[] = {
		{'c', character},
		{'s', string},
		{'%', percent};
		{NULL, NULL}
	};

	va_list args;
	int i = 0, j = 0;

	va_start(args, format);

	while (format && format[i])
	{
		while (fopt[j].option)
		{

			if (format[i] == '%)
			{
				fopt[j].function[args];
			}
			j++;
		}
		i++;
	}
