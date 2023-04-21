#include <stdio.h>

/**
 * print_to_fifty - prints the first fifty natural numbers
 * @n: The integer 1
 *
 * Return: Nothing.
 */
void print_to_fifty(int n)
{
	if (n > 50)
		return;
	printf("%i ", n);
	return (print_to_fifty(n + 1);
}
