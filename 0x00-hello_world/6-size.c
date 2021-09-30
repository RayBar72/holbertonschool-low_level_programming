#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Alway 0 (Success)
 */
int main(void)
{
	char caracter;
	int entero;
	long largo;
	long long largo2;
	float flotante;

	printf("Size of a char: %zu byte(s)\n", sizeof(caracter));
	printf("Size of a int: %zu byte(s)\n", sizeof(entero));
	printf("Size of a long int: %zu byte(s)\n", sizeof(largo));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(largo2));
	printf("Size of a float: %zu byte(s)\n\n", sizeof(flotante));
	return (0);
}
