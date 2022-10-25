#include "main.h"
/**
 * swap_int - swaps integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return:Always 0
 *
 */
void swap_int(int *a, int *b)
{
	int wahgwan;

	wahgwan = *a;

	*a = *b;

	*b = wahgwan;
}
