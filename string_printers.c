#include "main.h"

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
