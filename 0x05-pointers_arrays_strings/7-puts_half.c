#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int oE;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	}
	for (i = (_strlen(str) + oE) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
