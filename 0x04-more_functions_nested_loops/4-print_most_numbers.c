#include "main.h"
/**
 * print_most_numbers - prints the numbers
 *
 * Description: Prints the numbers excluding 2 and 4
 *
 * Return: Numbers from 0 to 9
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' &&  i != '4')
		{
			_putchar('i');
		}
	}
	_putchar('\n');
}
