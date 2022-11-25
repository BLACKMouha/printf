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
	size_t i, noc = 0;
	char *str, c;

	if (!format || format[0] == '\0')
		return (0);

	va_start(args, format);
	for (i = 0; format[i] && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (i + 1 < strlen(format) && format[i + 1] && is_spec(format[i + 1]) > 0)
			{
				switch (format[i + 1])
				{
					case 'c':
						c = va_arg(args, int);
						write(1, &c, 1);
						noc++;
						break;
					case '%':
						noc += write(1, &(format[i + 1]), 1);
						break;
					case 's':
						str = va_arg(args, char *);
						noc += loop_write(str);
						break;
				}
				i += 2;
			}
		}
		write(1, &(format[i]), 1);
		noc++;
	}
	va_end(args);
	return (noc - 1);
}

/**
 * is_spec - checks if a character preceded by '%' is a valid specifier
 * Prototype: int is_spec(char c);
 * @c: a character
 * Return: 1 if the character is a valid specifier otherwise 0.
 */
int is_spec(char c)
{
	int i, j;
	char specs[] = {'c', 's', '%', '\0'};

	i = j = 0;
	while (specs[i])
	{
		if (specs[i] == c)
			j++;
		i++;
	}

	return (j);
}



int loop_write(char *s)
{
	int i;
	for (i = 0; s[i]; i++)
		write(1, &(s[i]), 1);

	return (i);
}





















