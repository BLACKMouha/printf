#include "main.h"

/**
 * _putchar - prints out a single ASCII character
 * Prototype: int _putchar(char c);
 * @c: character to print
 * Return: the number of characters printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
 * _strlen - computes the lenght of a string
 * Prototype: int _strlen(const char *s);
 * @s: string
 * Return: number of characters of a string
 */
int _strlen(const char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * _strcmp - compares two strings
 * Prototype: int _strcmp(const char *s1, const char *s2);
 * @s1: string
 * @s2: string
 * Return: 0 if identical;
 * negative intger if s1 less than s2;
 * otherwise a positive integer.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
