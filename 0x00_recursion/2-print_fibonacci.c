#include "recursion.h"

/**
 * print_fibonacci - generates a fibonacci term
 * @n: The term whose fibonacci number is to be generated
 *
 * Return: A fibonacci number corresponding to the particular term
 */
int print_fibonacci(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
