#include <stdio.h>

/**
 * main - prints in lower and uppercase
 * Return: o
 */

int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
		putchar(cha);
	for (cha = 'A'; cha <= 'Z'; cha++)
		putchar(cha);
	putchar('\n');
	return (0);
}
