#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * Return: 0
 */

int main(void)
{
	char lowerc;

	for (lowerc = 'z'; lowerc >= 'a'; lowerc--)
		putchar(lowerc);
	putchar('\n');
	return (0);
}
