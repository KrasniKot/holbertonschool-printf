#include "main.h"
/**
 * character - prints a character
 * @arg: parameter
 * Description: prints a character
 * Return: 1
 */
int character(va_list arg)
{
	pch(va_arg(arg, int));
	return (1);
}
/**
 * string - prints a string
 * @arg: parameter
 * Return: len
 */
int string(va_list arg)
{
	int i;
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";

	for (i = 0; s[i]; i++)
		pch(s[i]);

	return (i);
}
/**
 * percent - prints a percent
 * @arg: parameter
 * Return: 1
 */
int percent(va_list arg)
{
	(void)arg;
	pch(37);
	return (1);
}
/**
 * decimal - prints a decimal
 * @arg: parameters
 * Return: len
 */
int decimal(va_list arg)
{
	int n = va_arg(arg, int);
	int i = 0;

	if (n < 0)
	{
		pch(45);
		n = -n;
		i++;
	}


	printer(n);
	return (i);
}
/**
 * printer - prints a number
 * @x: number printed
 * Return: nth
 */
void printer(int x)
{
	if (x / 10)
		printer(x / 10);

	pch(x % 10 + '0');
}
