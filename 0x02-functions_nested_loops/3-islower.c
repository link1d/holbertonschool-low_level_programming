#include "holberton.h"

/**
 * _islower - Check lower case
 *
 * Return: 1 for lower. 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
