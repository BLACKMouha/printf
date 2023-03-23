#include "main.h"
#include <stdarg.h>

/**
 * _putchar - prints out a single ASCII character
 * Prototype: int _putchar(char c);
 * @c: character to print
 * Return: the number of characters printed
 */
int _putchar(char c) {	return (write(1, &c, 1)); }

/**
 * _puts - prints out a string
 * Prototype: int _puts(char *s);
 * @s: string
 * Return: number of characters printed
 */
int _puts(char *s)
{
	int i;

	if (!s)
		return (_puts("(null)"));
	for (i = 0; i < _strlen(s); i++)
		_putchar(s[i]);
	return (i);
}

/**
 * _putstr - prints out a string
 * Prototype: int _puts(va_list ap);
 * @ap: variadic pointer
 * Return: number of characters printed
 */
int _putstr(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (!str)
		return (_puts("(null)"));
	else
		return (_puts(str));
}

/**
 * _putchr - prints out a single character
 * Prototype: int _puts(va_list p);
 * @ap: variadic pointer
 * Return: number of characters printed
 */
int _putchr(va_list ap)
{
	char c = va_arg(ap, int);

	return (write(1, &c, 1));
}

/**
 * _putnpt - prints out a string by replacing non printable characters
 * (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the
 * ASCII code value in hexadecimal (upper case - always 2 characters)
 *
 * Prototype: int _putnpt(va_list ap);
 * @ap: argument pointer for retrieving the next string
 * Return: number of characters printed
 */
int _putnpt(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i, noc;

	if (!str)
		return (_puts("(null)"));

	noc = 0;
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			noc += _puts("\\x0");
			noc += _puts(converter(str[i], 16, 0));
		}
		else
			noc += _putchar(str[i]);
	}
	return (noc);
}
