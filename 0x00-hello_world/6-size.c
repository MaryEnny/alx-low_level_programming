#include <stdio.h>

/**
 * main - main include
 *
 * Return: always 0
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d", sizeof(a));
	printf("Size of an int: %d", sizeof(b));
	printf("Size of a long int: %d", sizeof(c));
	printf("Size of a long long int: %d", sizeof(d));
	printf("Size of a float: %d", sizeof(e));
	return (0);
}
