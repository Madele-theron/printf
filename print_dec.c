#include "main.h"
/**
 * print_dec - Print integer
 * @ap: argumnt input
 * Return: return the amount of characters
 */
int print_dec(va_list ap)
{

	int contador = 0;

	contador = print_number(va_arg(ap, int));

	return (contador);
}

