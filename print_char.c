#include "main.h"
#include <stdio.h>

/**
 * print_char - Print characters
 * @ap: argument parameter / characters to print
 * Return: Always 1 (Success)
 */

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
