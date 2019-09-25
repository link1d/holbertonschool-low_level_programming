#include "holberton.h"

/**
 * print_sign - Print sign num
 * @c: Checked num
 *
 * Return: 1 for positive num, -1 else if, 0 for else
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
