#include "main.h"

/**
 * _putint2bin - prints out the binary representation of an integer
 * Prototype: int _putint2bin(unsigned long int n);
 * @n: integer to print
 * Return: the number of integer printed
 */
int _putint2bin(unsigned long int n)
{
	int i, tmp;
	char *s;

	if (n == 0)
	{
		s = _strdup("0");
		return (_puts(s));
	}
	i = 0;
	tmp = n;
	for (; tmp > 1; tmp /= 2)
		i++;

	i++;
	s = malloc(i * sizeof(char));
	if (!s)
		return (0);
	i = 0;
	for (; n > 1; n /= 2)
		s[i++] = ((n & 1) + '0');

	s[i++] = (n & 1) + '0';
	s[i] = '\0';
	rev_str(s);
	_puts(s);
	free(s);

	return (i);
}
