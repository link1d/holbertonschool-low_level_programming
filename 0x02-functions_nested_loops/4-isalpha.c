#include "holberton.h"

/**
 * _isalpha - Alphabetic
 * @c: Checked char
 *
 * Return: 1 alpha, 0 else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
