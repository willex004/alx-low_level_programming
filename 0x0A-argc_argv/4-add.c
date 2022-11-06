#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check - check string for digit
 * @str: array str
 * Return: 0
 */

int check(char *str)
{
	unsigned int a;
	a = 0;
	while (a < strlen(str))
	{
		if (!isdigit(str[a]))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/**
 * main - print added numbers
 * @argc: count argument
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int c = 0;

	a = 1;
	while (a < argc)
	{
		if (check(argv[a]))
		{
			b = atoi(argv[count]);
			c += b;
		}
		else
		{
			printf("eror \n");
			return (1);
		}
		a++;
	}
	printf("%d \n", c);
	return (0);
}
