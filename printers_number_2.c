#include "main.h"

/**
 * _puthexX - prints the hexadecimal form of an integer
 * Prototype: int _puthexX(va_list ap);
 * @ap: argument pointer for retrieving integer to print
 * @lower: if positive prints lowercase, otherwise uppercase representation
 * Return: the number of characters printed
 */
int _puthexX(va_list ap, int lower)
{
	unsigned int i = va_arg(ap, unsigned int);
	char *s;
	int len;

	if (lower > 0)
		s = converter(i, 16, 0);
	else
		s = converter(i, 16, 1);
	len = _puts(s);
	free(s);
	return (len);
}

/**
 * _puthex - prints the hexadecimal form of an integer
 * Prototype: int _puthex(va_list ap);
 * @ap: argument pointer for retrieving integer to print
 * Return: the number of characters printed
 */
int _puthex(va_list ap)
{
	return (_puthexX(ap, 0));
}

/**
 * _putheX - prints the hexadecimal form of an integer
 * Prototype: int _putheX(va_list ap);
 * @ap: argument pointer for retrieving integer to print
 * Return: the number of characters printed
 */
int _putheX(va_list ap)
{
	return (_puthexX(ap, 1));
}
