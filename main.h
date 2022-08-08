#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>// library that has the write() function
// write() function explaination - https://youtu.be/dP3N8g7h8gY?t=331
#include <limits.h>
#include <stdlib.h>

/**  Function printf **/
/**********************/

/**
 * struct op - structure to use in printf
 * @op: ooperator of structure
 * @f: function of work
 */

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(char c);

/* Prototype function to printf */
int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

int _parseo(const char *format, op_t ops[], va_list ap);

#endif
