#include "main.h"
#include <stdarg.h>

/**
 * _printf - writes out to stdout by producing an output according to a format
 * Prototype: int _printf(const char *format, ...)
 * @format: a string that contains eventual directive to print variables value
 * Return: number of characters printed if no error, else -1 is returned
 */
int _printf(const char *format, ...)
{
	int i, noc;
	va_list ap;

	if (!format || !*format || !_strcmp(format, "%"))
		return (-1);

	va_start(ap, format);
	noc = 0;
	for (i = 0; i < _strlen(format); i++)
	{
	if (format[i] == '%')
	{
		i++;
		if (format[i] == 'c')
			noc += _putchar(va_arg(ap, int));
		else if (format[i] == 's')
			noc += _puts(va_arg(ap, char *));
		else if (format[i] == '%')
			noc += _putchar('%');
		else if (format[i] == 'd' || format[i] == 'i')
			noc += _putint(va_arg(ap, int));
		else if (format[i] == 'b')
		{
			noc += _putint2bin(va_arg(ap, int));
		}
		else
		{
			if (format[i])
			{
				i--;
				noc += _putchar(format[i]);
			}
		}
	}
	else
		noc += _putchar(format[i]);
	}
	va_end(ap);
	return (noc);
}
