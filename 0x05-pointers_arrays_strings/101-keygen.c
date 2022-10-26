#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate valid random passwords for 101-crackme
 * Return: 0
 */

int main(void)
{
	int a = 4882;
	int b;

	srand(time(0));
	while(a)
	{
		b = rand() % 100;
		if (b <= 94)
			b += 32;
		else
			continue;
		if (a - b == 0)
		{
			a -= b;
			printf("%c", b);
		}
		else if (a - b - 32 > 0)
		{
			a -= b;
			printf("%c", b);
		}
	}
	return (0);
}
