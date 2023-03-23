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
