#include "recursion.h"

/**
 * digit_sum - finds the sum of digits of a number
 * using recursion
 * @n: The number whose digits are to be added
 *
 * Return: The sum of digits of n
 */
int digit_sum(int n)
{
	if (n == 0)
		return (0);
	return (n % 10 + add_digits(n / 10));
}
