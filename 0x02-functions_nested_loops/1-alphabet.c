#include "holberton.h"

/**
 * print_alphabet - Alpha bet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
