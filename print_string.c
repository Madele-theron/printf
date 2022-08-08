#include "main.h"
#include <stdio.h>

/**
 * print_string - Print string
 * @ap: argument parameter
 * Return: Always 1 (Success)
 */
int print_string(va_list ap)
{
	int x;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (x = 0; str[x] != '\0'; x++)
	{
	print_char(str[x]);
	}
	return (x);
}
