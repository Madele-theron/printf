#include "main.h"
#include <stdio.h>

/**
 * print_percent - Print percent symbol
 * @ap: argument parameter
 * Return: Always 1 (Success)
 */

int print_percent(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}
