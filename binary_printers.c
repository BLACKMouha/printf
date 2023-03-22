#include "main.h"

/**
 * int2bin - prints out the binary representation of an integer
 * Prototype: char *int2bin(long int n);
 * @n: integer to print
 * Return: the number of integer printed
 */
char *int2bin(long int n)
{
	unsigned long int i, tmp, r;
	char *s;

	if (n == 0)
	{
		s = _strdup("0");
		return (s);
	}
	else if (n > 0)
	{
		i = 0;
		tmp = n;
		for (; tmp > 1 || i < 63; tmp /= 2)
			i++;

		i++;
		s = malloc(i * sizeof(char));
		if (!s)
			return 0;
		i = 0;
		for (; n > 1; n /= 2)
			s[i++] = ((n & 1) + '0');

		s[i++] = (n & 1) + '0';
		s[i] = '\0';
		rev_str(s);
		return (s);
	}
	else
	{
		tmp = (unsigned int)(-n);
		tmp = ~tmp;
		tmp = tmp + 1;
		r = tmp;
		for (i = 0; tmp > 1 || i < 63; tmp /= 2)
				i++;

		i++;
		s = malloc(i * sizeof(char));
		if (!s)
			return 0;

		for (i = 0; r > 1 || i < 63; r /= 2)
			s[i++] = ((r & 1) + '0');

		s[i++] = (r & 1) + '0';
		s[i] = '\0';
		rev_str(s);
		return (s);
	}
}

int _putint2bin(long int n)
{
	char *s = int2bin(n);
	int len = _strlen(s);

	_puts(s);
	free(s);
	return (len);
}
