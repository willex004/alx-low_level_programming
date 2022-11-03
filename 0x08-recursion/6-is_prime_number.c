#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - calculates if number is prime recursively
 * @n: number to evaluate
 * @a: iterator
 * Return: 1 if n is prime and 0 if not
 */

int prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime_number(n, a - 1));
}
