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
	size_t len_f = strlen(format), i, j, noc = 0;
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
					noc += putchar(va_arg(args, int));
					break;
				case '%':
					noc += putchar('%');
					break;
				case 's':
					str = va_arg(args, char *);
					for (j = 0; str[j]; j++, noc++)
						putchar(str[j]);
					break;
			}
		}
		else
			noc += putchar(format[i]);
	}
	return (noc);
}




















