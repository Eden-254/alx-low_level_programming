#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int ovo;

	if (_strlen(str) % 2 != 0)
	{
		ovo += 1;
	}
	for (i = (_strlen(str) + ovo) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
