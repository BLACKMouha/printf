#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: integer
 * Return: an integer representating the absolute value of the integer
 */
unsigned long int _abs(long int x)
{
	if (x < 0)
		return (unsigned int) (-x);
	else
		return (unsigned int) (x);
}