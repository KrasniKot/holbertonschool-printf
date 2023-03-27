#include "main.h"
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

