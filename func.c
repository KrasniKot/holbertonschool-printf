#include "main.h"

void character(va_list arg)
{
        printf("%c", va_arg(arg, int));
}

void string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i;

	for (i = 0; s[i]; i++)
	{
		pch(s[i]);
	}
}
void percent(va_list arg)
{
	pch(37);
}
