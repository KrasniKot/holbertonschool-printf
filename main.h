#ifndef _printf_
#define _printf_
#include <stdio.h>
#include <stdarg.h>
/**
 * struct fc - function choicer
 * Description: struct
 * Return: nth
 * @option: option
 * @function: function being called
 */
typedef struct fc
{
	char option;
	int (*function)(va_list arg);

} type;

int _printf(const char *format, ...);
int get_op_func(va_list arg, char op);
int character(va_list arg);
int string(va_list arg);
int percent(va_list arg);
int decimal(va_list arg);
void printer(int x);
int pch(char c);

#endif
