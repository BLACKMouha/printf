#include "main.h"

/**
 * _putint - prints out an integer
 * Prototype: int _putint(int n);
 * @n: integer
 * Return: number of characters printed
 */
int _putint(int n)
{
	unsigned int n1;
	int noc = 0;

	if (n == 0)
		return (_putchar('0'));

	if (n < 0)
	{
		n1 = -n;
		noc += _putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		noc += _putint(n1 / 10);

	noc += _putchar((n1 % 10) + '0');
	return (noc);
}
