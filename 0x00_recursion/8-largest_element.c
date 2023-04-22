#include "recursion.h"

/**
 * print_largest - prints the largest element of an array
 * @array: The array whose largest element is to be printed
 * @start: The starting index to start the search
 * @n: The number of elements in the array
 *
 * Return: The largest element of the array
 */
int print_largest(int array[], int start, int n)
{
	int largest;

	if (start == n)
		return (largest);
	if (array[start + 1] > array[start])
		largest = array[start + 1];
	else
		largest = array[start];
	return(print_largest(array, start + 1, n);
}
