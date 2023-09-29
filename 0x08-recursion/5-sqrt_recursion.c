#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: parameter
 * Return: o
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 * @n: parameter
 * @a: iterator
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (actual_sqrt_recursion(n, a + 1));

}
