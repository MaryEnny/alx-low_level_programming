#include "main.h"

/**
 * is_prime_number - check if input integer is a prime number
 * @n: parameter
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: parameter
 * @u: iterator
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int u)
{
	if (u == 1)
		return (1);
	else if (n % u == 0 && u > 0)
		return (0);
	else
		return (actual_prime(n, u - 1));
}
