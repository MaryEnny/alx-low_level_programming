#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_f: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_f, int file_to, char *argv[])
{
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_f, file_to, err;
	ssize_t s, n;
	char f[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_f = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_f, file_to, argv);

	s = 1024;
	while (s == 1024)
	{
		s = read(file_f, f, 1024);
		if (s == -1)
			error_file(-1, 0, argv);
		n = write(file_to, f, s);
		if (n == -1)
			error_file(0, -1, argv);
	}

	err = close(file_f);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}

	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	return (0);
}
