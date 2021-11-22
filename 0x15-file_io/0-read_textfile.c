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
	int op;
	ssize_t count, w;

	s = malloc(letters);
	if (!s)
		return (0);

	if (!filename)
		return (0);
	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);
	count = read(op, s, letters);
	close(op);
	if (count < 0)
	{
		count = 0;
		free(s);
		return (0);
	}
	w = write(1, s, count);
	if (w != count || w < 0)
	{
		return (0);
		free(s);
	}
	return (count);
}
