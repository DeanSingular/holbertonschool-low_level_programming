#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - determine a input integer is a prime number or not
 * @n: the number that need to determine
 * Return: return 1 if is prime, return 0 is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: the number need to check
 * @i: iterator
 *
 * Return: return 1 if is prime, otherwise, return 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
