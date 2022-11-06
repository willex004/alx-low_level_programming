#include <stdio.h>
#include "main.h"

/**
 * main - print received argument
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	if (argc > 0)
	{
		while (a < argc)
		{
			printf("%s \n", argv[a]);
			a++;
		}
	}
	return (0);
}
