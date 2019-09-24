#include "holberton.h"

/**
 * print_alphabet_x10 - x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int linea = 0;

	while (linea < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		linea++;
	}
}
