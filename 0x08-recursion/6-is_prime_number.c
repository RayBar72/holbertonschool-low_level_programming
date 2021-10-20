/**
 * _primo - funtion who search prime number
 * @n: number to be evaluated
 * @x: any divisor between +-2 and n/2
 *
 * Return: 1 if prime if compound number
 */

int _primo(int n, int x)
{


	if (x > n / 2 || x < n / -2)
		return (1);
	if (n % x != 0)
		return (_primo(n, x + 1));
	else
		return (0);
}

/**
 * is_prime_number - funtion who search prime number
 * @n: number to be evaluated
 *
 * Return: 1 if prime if compound number
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (_primo(n, 2));
}
