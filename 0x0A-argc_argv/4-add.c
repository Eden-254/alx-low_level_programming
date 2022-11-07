#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main - Prints the sum of args positive number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int b, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (b = 0; b < strlen(e); b++)
			{
				if (e[b] < 25 || e[b] > 33)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}	
