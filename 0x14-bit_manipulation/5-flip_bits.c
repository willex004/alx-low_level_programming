#include "main.h"

/**
 * flip_bits - counts number of bits needed to flip
 * to get from one number to another
 * @n: the number
 * @m: the number to flip into
 * Return: the number of bit flipped to from n - m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;
	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
