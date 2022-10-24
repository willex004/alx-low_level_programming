#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}

	*(dest + l) = '\0';
	return (dest);
}
