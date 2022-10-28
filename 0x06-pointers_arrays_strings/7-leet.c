#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @a: input
 * Return:value of a
 */

char *leet(char *a)
{
	int b, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == s1[c])
			{
				a[b] = s2[c];
			}
		}
	}
	return (a);
}
