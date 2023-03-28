#include "main.h"
/**
 * _printf - main function
 * Description: print string and calls a function
 * @format: args
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list arg;

	va_start(arg, format);

	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == 37)
		{
			if (!format[i + 1])
				return (-1);

			len += get_op_func(arg, format[i + 1]);
			i++;
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
