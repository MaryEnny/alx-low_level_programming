#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])

{
	int o;

	for (o = 0; o < argc; o++)
	{
		printf("%s\n", argv[o]);
	}
	return (0);
}
