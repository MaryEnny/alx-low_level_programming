#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{
	char *rrr;
	int m, a = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;
	rrr = malloc(sizeof(char) * (m + 1));
	if (rrr == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		rrr[a] = str[a];
	return (rrr);
}
