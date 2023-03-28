#include "main.h"
/**
 * _printf - main function
 * Description: print string and calls a function
 * @format: args
 * Return: 0
 */
int _printf(const char *format, ...)
{
	type fopt[] = {
		{'c', character},
		{'s', string},
		{'%', percent},
		{'\0', '\0'}
	};

	int i, j;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == 37)
		{
			for (j = 0; fopt[j].option; j++)
			{
				if (format[i + 1] == fopt[j].option)
				{
					i++;
					fopt[j].function(arg);
				}
			}
			j = 0;
		}
		else
			pch(format[i]);
	}

	va_end(arg);

	return (0);
}
