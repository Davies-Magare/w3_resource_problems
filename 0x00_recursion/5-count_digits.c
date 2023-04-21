#include "recursion.h"

/**
 * count_digits - counts the digits in a number using
 * recursion
 * @n: The number whose digits are to be counted
 *
 * Return: The number of digits of n
 */
int count_digits(int n)
{
	if (n / 10 == 0)
		return (1);
	else
		return (1 + count_digits(n / 10));
}
