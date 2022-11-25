#include "main.h"

/**
 * _printf - variadic function that produces output according to a format
 * Prototype: int _printf(const char *format, ...);
 * @format: a string that can contain flag(s), specifier(s), field width, etc
 * Return: the number of character printed;
*/

int _printf(const char *format, ...)
{
	va_list args;
	size_t len_f = strlen(format), i, j, c, noc = 0;
	char *str;

	if (!format || format[0] == '\0')
		return (0);

	va_start(args, format);
	for (i = 0; i < len_f; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					noc += write(1, &(c), 1);
					break;
				case '%':
					c = '%';
					noc += write(1, &(c), 1);
					break;
				case 's':
					str = va_arg(args, char *);
					for (j = 0; str[j]; j++, noc++)
					{
						c = va_arg(args, int);
						write(1, &(c), 1);
					}
			}
		}
		else
			noc += write(1, &(format[i]), 1);
	}
	return (noc);
}




















