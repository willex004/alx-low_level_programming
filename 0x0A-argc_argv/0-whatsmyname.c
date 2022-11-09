#include "main.h"

/**
 * main - print the nameof the program
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
