#include "main.h"

int main(void)
{
	char *s = "string";
	_printf("%s", "strrrrr");
	putchar (10);
	_printf("character: %c", 'c');
	putchar (10);
	_printf("string is a: %s", s);
	putchar (10);
	_printf("percent is a: %%");
	putchar (10);
	_printf("");
	putchar (10);
	_printf("Ale");
	_printf(" and %s.", "string");
	putchar (10);
	_printf("string %s string", "and");

	return (0);
}
