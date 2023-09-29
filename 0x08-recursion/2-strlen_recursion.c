#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: parameter
 * Return: r
 */

int _strlen_recursion(char *s)
{
	int r = 0;

	if (*s)
	{
		r++;
		r += _strlen_recursion(s + 1);
	}
	return (r);
}

