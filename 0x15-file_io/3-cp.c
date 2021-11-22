#include "main.h"

/**
 * main - program that copies te content of a file to another
 * @argc: int
 * @argv: string to string
 * Return: several values
 */

int main(int argc, char **argv)
{
	int f1, f2, r, c1, c2;
	char buffer[1024];

	if (argc != 3)
		dprintf(1, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(argv[1], O_RDONLY, 0664);
	if (f1 < 0)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((r = read(f1, buffer, 1024)) > 0)
	{
		if (f2 < 0 || (write(f2, buffer, r) != r))
		{
			dprintf(1, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(f1);
	if (c1 < 0)
		dprintf(1, "Error: Can't close fd %i\n", f1), exit(100);
	c2 = close(f2);
	if (c2 < 0)
		dprintf(1, "Error: Can't close fd %i\n", f2), exit(100);
	return (0);
}
