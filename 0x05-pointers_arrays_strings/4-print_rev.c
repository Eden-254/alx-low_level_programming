#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
