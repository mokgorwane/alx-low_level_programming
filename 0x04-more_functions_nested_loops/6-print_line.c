#include "main.h"
#include <stdio.h>

/**
 * print_line - Print line
 * @n : shape
 * Return: Void.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
