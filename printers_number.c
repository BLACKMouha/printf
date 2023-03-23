#include "main.h"
#include <stdarg.h>

/**
 * _putint - prints out an integer
 * Prototype: int _putint(va_list n);
 * @ap: argument pointer
 * Return: number of characters printed
 */
int _putint(va_list ap)
{
	int i = va_arg(ap, int);
	char *s;
	int len = 0;

	if (i < 0)
	{
		len += _putchar('-');
		i *= -1;
	}
	s = converter(i, 10, 1);
	len += _puts(s);
	free(s);
	return (len);
}

/**
 * _putbin - prints out the binary representation of an integer
 * Prototype: int _putbin(lva_list n);
 * @ap: argument pointer
 * Return: the number of integer printed
 */
int _putbin(va_list ap)
{
	unsigned int i = va_arg(ap, unsigned int);
	char *s;
	int len;

	s = converter(i, 2, 0);
	len = _puts(s);
	free(s);
	return (len);
}

/**
 * _putuint - prints the unsigned decimal form of an integer
 * Prototype: int _putuint(va_list ap);
 * @ap: argument pointer
 * Return: the number of characters printed
 */
int _putuint(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *s = converter(n, 10, 0);
	int len = _puts(s);

	free(s);
	return (len);
}


/**
 * _putoct - prints the hexadecimal form of an integer
 * Prototype: int _putheX(va_list ap);
 * @ap: argument pointer for retrieving integer to print
 * Return: the number of characters printed
 */
int _putoct(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *s = converter(n, 8, 0);
	int len = _puts(s);

	free(s);
	return (len);
}
