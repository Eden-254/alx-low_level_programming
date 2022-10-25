#include "main.h"
/**
 * puts2 - puts string twice
 * @str: string to put twice
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
