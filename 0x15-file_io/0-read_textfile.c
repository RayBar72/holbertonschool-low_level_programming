#include "main.h"

/**
 * read_textfile - prints to the POSIX
 * @filename: pointer to the name of the file
 * @letters: size to be printed
 * Return: number of letters, 0 in other case
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	int op, r, w;

	if (filename == NULL)
		return (0);
	s = malloc(letters);
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(s);
		return (0);
	}
	r = read(op, s, letters);
	if (r == -1)
	{
		free(s);
		return (0);
	}
	w = write(STDOUT_FILENO, s, r);
	if (w == -1)
	{
		free(s);
		close(op);
		return (0);
	}
	free(s);
	close(op);
	return (w);
}
