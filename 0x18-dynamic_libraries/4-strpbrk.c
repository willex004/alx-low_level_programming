#include "main.h"

/**
 * _strpbrk - first occurence of any byte in accept within s
 * @accept: needle
 * @s: haystackR
 * Return: s or Null
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
