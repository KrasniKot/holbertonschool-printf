#include "main.h"
/**
 *
 */
void character(va_list args)
{
        pch(va_arg(args, int));
}
/**
 *
 */
void string(va_list args)
{
        int i = 0;

        while(va_arg(args, char *))
        {
                i++;
        }

        for (; i >= 0; i--)
        {
                pch(va_arg(args, int));
        }
}
/**
 * percent - prints a %.
 * @args: percent.
 */
void percent(va_list args)
{
        pch(va_arg(args, int));
}

/**
 *
 *
 */
int _printf(const char *format, ...)
{
	type fopt[] = {
		{'c', character},
		{'s', string},
		{'%', percent},
		{'\0', '\0'}
	};

	va_list args;
	int i = 0, j = 0;

	va_start(args, format);

	while (format && format[i])
	{
		pch(49);
		while (fopt[j].option)
		{
			pch(50);

			if (format[i] == '%')
			{
				fopt[j].function(args);
			}
			j++;
		}
		i++;
	}
	va_end(args);

	pch(48);
	return (0);
}
