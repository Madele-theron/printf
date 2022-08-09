#include "main.h"
#include <stdio.h>

/**
 * _printf - Print string input
 * @format: arguments
 * Return: return the amount of characters
 */


int _printf(const char *format, ...)
{

	op_t ops[] = {
		{"c", _print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}};

	int print = 0;
	va_list ap;

	if (format != NULL)
	{
		va_start(ap, format);
		print = _parseo(format, ops, ap);
		va_end(ap);
	}
	else
	{
		return (-1);
	}

	return (print);
}
