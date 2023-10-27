#include "main.h"


/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)

{
	int p;
	unsigned int m;

	m = 0;
	if (!b)
		return (0);
	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
	}
	for (p = 0; b[p] != '\0'; p++)
	{
		m <<= 1;
		if (b[p] == '1')
			m += 1;
	}
	return (m);
}
