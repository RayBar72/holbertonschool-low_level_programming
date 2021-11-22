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
	ssize_t count;

	if (!filename)
		return (0);
	s = malloc(letters);
	if (!s)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
	{
		return (0);
		free(s);
	count = read(op, s, letters);
	close(op);
	if (count < 0)
	{
		count = 0;
		free(s);
	}
	if (write(1, s, count) != count)
	{
		return (0);
		free(s);
	}
	return (count);
}
