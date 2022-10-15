#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: 0
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++);
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
