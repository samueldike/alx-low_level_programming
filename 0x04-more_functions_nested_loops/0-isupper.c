#include "main.h"
/**
 * _isupper -> this is a function to check upper case alphas
 * @c: print int
 * Return: give 1 or 0
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
