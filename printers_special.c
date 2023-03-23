#include "main.h"

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
