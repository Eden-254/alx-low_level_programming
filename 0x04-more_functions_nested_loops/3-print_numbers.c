#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return:Always 0
 */
void print_numbers(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
