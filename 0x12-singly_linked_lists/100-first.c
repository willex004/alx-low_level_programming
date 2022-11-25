#include "lists.h"
#include <stdio.h>


/**
 * main - prints before main
 * Return: void 
 */

void  __attribute__((constructor)) main()
{
	printf("You\'re beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
