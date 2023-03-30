#include "main.h"
/**
 * binary - prints a integer in binary.
 * @arg: integer.
 * Return: len.
 */
int binary(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int nc = n;
	int l = 0;
	int len = 0;
	char *s;

	while (nc > 0)
	{
		nc /= 2;
		l++;
		
	}

	l += 1;
	s = malloc(sizeof(char) * l);
	l -= 1;
	
	while (l != 0)
	{
		s[l] = n % 2 + 48;
		n /= 2;
		len++;
		l--;
	
	}
	while (nc <= len)
	{
		pch(s[nc]);
		nc++;
	}

	return (len);
}
/**
 * rot13 - prints a string in rot13.
 * @arg: char *.
 * Return: len.
 */
int rot13(va_list arg)
{
	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ou = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *c = va_arg(arg, char *);

	int i, j, len = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] < 65 || c[i] > 90 && c[i] < 97 || c[i] > 122)
		{
			pch(c[i]);
			len++;
		}
		for (j = 0; in[j]; j++)
		{
			if (c[i] == in[j])
			{
				pch(ou[j]);
				len++;
			}
		}

	}
	return (len);
}
