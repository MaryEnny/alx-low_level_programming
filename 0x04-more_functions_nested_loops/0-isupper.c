#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * c: variable text
 * _isupper - checks for uppercase character
 * Return: always 0
 *
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

