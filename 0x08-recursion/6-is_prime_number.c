#include "main.h"

/**
 * prime_number - detects if an output number is a prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if n is a prime number & 0 if n is not a prime number
 */

int prime_number(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime_number(n, c + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number & 0 if n is not a prime number
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_number(n, 2));
}
