#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *con;
	int h, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	h = b = 0;
	while (s1[h] != '\0')
		h++;
	while (s2[b] != '\0')
		b++;
	con = malloc(sizeof(char) * (h + b + 1));
	if (con == NULL)
		return (NULL);
	h = b = 0;
	while (s1[h] != '\0')
	{
		con[h] = s1[h];
		h++;
	}
	while (s2[b] != '\0')
	{
		con[h] = s2[b];
		h++, b++;
	}
	con[h] = '\0';
	return (con);
}
