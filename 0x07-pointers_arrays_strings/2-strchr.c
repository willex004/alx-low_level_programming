#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds @c in *s
 * @s: library
 * @c: book
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[i]);
		}
		else
		{
			continue;
		}
	}
	if (c == '\0' && s[a] =='\0')
	{
		return (&s[a]);
	}
	return (NULL);
}
