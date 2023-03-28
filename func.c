#include "main.h"

int character(va_list arg)
{
        pch(va_arg(arg, int));
}

int string(va_list arg)
{
	int i;
	char *s = va_arg(arg, char *);

	for (i = 0; s[i]; i++)
	{
		pch(s[i]);
	}
	return (i);
}
int percent(va_list arg)
{
	pch(37);
}
