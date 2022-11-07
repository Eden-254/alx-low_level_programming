#include "main.h"
/**
 * _isdigit - Check if a character is a digit
 *
 * @c: character to determine
 *
 * Return: 1 for a character that will be a digit or 0 for any else
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
