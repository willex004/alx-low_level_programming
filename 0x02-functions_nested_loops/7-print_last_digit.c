#include "main.h"

/**
 * print_last_digit - prints last digit
 * @a: the number
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int m = a % 10;

	if (m < 0)
		m *= -1;

	_putchar(m + '0');

	return (0);
}
