#include "recursion.h"

/**
 * factorial - returns the factorial of a number
 * @n: The number to calculate the factorial
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
