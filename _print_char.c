#include "main.h"
#include <stdio.h>

/**
 * _print_char - Print string
 * @ap: arguments
 * Return: return the amount of characters
 */

int _print_char(va_list ap)
{
	print_char(va_arg(ap, int));
	return (1);
}

/**
 * print_string - Print string
 * @ap: arguments
 * Return: return the amount of characters
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

/**
 * print_percent - Print percent symbol
 * @ap: argumnt
 * Return: return the amount of characters
 */

int print_percent(__attribute__((unused))va_list ap)
{
	print_char('%');
	return (1);
}


/**
 * print_integer - Print integer
 * @ap: argumnt input
 * Return: return the amount of characters
 */
int print_integer(va_list ap)
{

	int contador = 0;

	contador = contador + print_number(va_arg(ap, int));

	return (contador);
}

/**
 * print_number - Print number
 * @n: argumnt
 * Return: void
 */
int print_number(int n)
{

	int ban = 0, i, len, m;

	i = 0;
	len = 0;
	m = 0;


	if (n == INT_MIN)
	{
		n = n + 1;
		ban = 1;
	}

	if (n < 0)
	{
		n = -n;
		print_char('-');
		i++;
	}

	if (n / 10 != 0)
		len = (m + print_number(n / 10));

	if (ban == 1)
	{
		print_char('8');
	}
	else
	{
		print_char(n % 10 + '0');
	}

	i++;

	return (i + len);

}
