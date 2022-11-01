#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @src: src
 * @dest: dest
 * @n: no of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
