#include "recursion.h"

/**
 * print_array - prints the elements of an array
 * @n: number of the elements of the array less 1
 * @array: The array whose elements are to be printed
 *
 * Return: Nothing.
 */
void print_array(int array[], int n)
{
	if (n < 0)
		return;
	else
		print_array(array, n - 1);
	printf("%i ", array[n]);
}
