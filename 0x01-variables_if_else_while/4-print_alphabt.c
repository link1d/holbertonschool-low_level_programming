#include <stdio.h>
/**
 * main - Deleted eq
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q'  && a!= 'e')
			putchar(a);

	putchar('\n');

	return (0);
}
