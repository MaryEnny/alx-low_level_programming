#include <stdlib.h>
#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @l: memory area to be filled
 * @s: char to copy
 * @p: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *l, char s, unsigned int p)

{
	unsigned int v;

	for (v = 0; v < p; v++)
	{
		l[v] = s;
	}
	return (l);
}


/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
