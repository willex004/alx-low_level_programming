#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char a = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
	{
		c--;
		a = s[i];
		s[i] = s[c];
		s[c] = a;
	}
}
