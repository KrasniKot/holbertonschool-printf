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
		{'d', decimal},
		{'i', decimal},
		{'\0', '\0'}
	};

	int i, j, len = 0;
	va_list arg;

	va_start(arg, format);

	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if(format[i] == 37)
		{
			if (!format[i + 1])
				return (-1);
	
			for (j = 0; fopt[j].option; j++)
			{
				if (format[i + 1] == fopt[j].option)
				{
					i++;
					len += fopt[j].function(arg);
				}
			}
			j = 0;
		}
		else
		{
			pch(format[i]);
			len++;
		}
	}
	va_end(arg);

	return (len);
}
