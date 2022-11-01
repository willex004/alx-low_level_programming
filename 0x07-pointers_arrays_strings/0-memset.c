#include "main.h"

/**
 * _memset - fills first n bytes of *s with const b
 * @s: src
 * @b: const byte
 * @n: no of bytes to fill
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
