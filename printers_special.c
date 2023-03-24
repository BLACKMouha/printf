#include "main.h"
#include <stdarg.h>

/**
 * _putprt - prints out the percent sign
 * Prototype: int _putprt(va_list ap);
 * @ap: argument pointer;
 * Return: the number of characters printed
 */
int _putprt(va_list ap)
{
	(void) ap;

	return (_putchar('%'));
}

/**
 * _putadd - prints out the memory address in hexadecimal
 * Prototype: int _putadd(va_list ap);
 * @ap: argument pointer;
 * Return: the number of characters printed
 */
int _putadd(va_list ap)
{
	unsigned long int ptr = va_arg(ap, unsigned long int);
	int i = 0;

	if (!ptr)
		return (_puts("(nil)"));
	i += _puts("0x");
	i += (_puts(converter(ptr, 16, 1)));
	return (i);
}
