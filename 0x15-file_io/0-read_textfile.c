#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int m;
	ssize_t o, p;
	char *f;

	if (!filename)
		return (0);

	m = open(filename, O_RDONLY);

	if (m == -1)
		return (0);

	f = malloc(sizeof(char) * (letters));
	if (!f)
		return (0);

	o = read(m, f, letters);
	p = write(STDOUT_FILENO, f, o);
	close(m);
	free(f);
	return (p);
}
