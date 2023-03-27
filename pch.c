#include <unistd.h>
#include "main.h"
/**
 * pch - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int pch(char c)
{
	return (write(1, &c, 1));
}
