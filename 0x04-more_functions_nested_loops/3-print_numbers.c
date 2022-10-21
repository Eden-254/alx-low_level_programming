#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return: The numbers since 0 up to 9
 *
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
