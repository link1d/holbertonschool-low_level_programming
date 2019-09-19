#include <stdio.h>

int main(void)
{

	char c;
	int i;
	long int l;
	long long int o;
	float f;

	printf("Size of a char: %lu byte(s)\n", (char)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a float: %lu byte(s)\n", (long)sizeof(f));

	return (0);
}
