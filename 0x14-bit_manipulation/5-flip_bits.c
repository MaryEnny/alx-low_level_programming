#include "main.h"


/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int p, cb = 0;
	unsigned long int t;
	unsigned long int e = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		t = e >> p;
		if (t & 1)
			cb++;
	}
	return (cb);
}
