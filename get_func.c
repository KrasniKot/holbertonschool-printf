#include "main.h"
/**
 * get_op_func - calls a function
 * Description: function caller
 * @arg: arguments
 * @op: option
 * Return: len
 */
int get_op_func(va_list arg, char op)
{
	type fopt[] = {
		{'c', character},
		{'s', string},
		{'%', percent},
		{'d', decimal},
		{'i', decimal},
		{'\0', '\0'}
	};

	int j;

	for (j = 0; fopt[j].option && op; j++)
	{
		if (fopt[j].option == op)
		{
			return (fopt[j].function(arg));
		}
	}

	pch(37);
	pch(op);
	return (2);
}
