#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function.
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a = 0, b, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);

	while (format && format[a])
	{
		b = 0;

		while (t_arg[b])
		{
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
			case "c":
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case "i":
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case "f":
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case "s":
				str = va_arg(valist, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} a++;
	}
	printf("\n"), va_end(valist);
}
