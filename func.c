#include "main.h"
/**
 * character - prints a character
 * @arg: parameter
 * Description: prints a character
 * Return: 0
 */
int character(va_list arg)
{
	pch(va_arg(arg, int));
	return (0);
}
/**
 * string - prints a string
 * @arg: parameter
 * Return: 0
 */
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
/**
 * percent - prints a percent
 * @arg: parameter
 * Return: 0
 */
int percent(va_list arg)
{
	(void)arg;
	pch(37);
	return (0);
}
