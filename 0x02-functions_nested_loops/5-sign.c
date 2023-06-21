#include "main.h"

/**
 * print_sign - rints the sign of a number.
 * @c: The number to be chacked
 * Return: 1 for positive number, -1 for negetive num or 0 for anything esle.
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
