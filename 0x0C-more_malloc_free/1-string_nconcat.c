#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *o;
	unsigned int k = 0, m = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		o = malloc(sizeof(char) * (l1 + n + 1));
	else
		o = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!o)
		return (NULL);
	while (m < l1)
	{
		o[m] = s1[m];
		m++;
	}
	while (n < l2 && m < (l1 + n))
		o[m++] = s2[k++];
	while (n >= l2 && m < (l1 + l2))
		o[m++] = s2[k++];
	o[m] = '\0';
	return (o);
}
