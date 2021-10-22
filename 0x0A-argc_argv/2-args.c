#include <stdio.h>
#include <string.h>
/**
 * main - program that prints all arguments it receives
 * @argc: int variable
 * @argv: string
 * Return: 0
 */

int main(int argc, char **argv)
{

	(void)argc;
	for ( ; *argv; argv++)
		puts(*argv);
	return (0);
}
