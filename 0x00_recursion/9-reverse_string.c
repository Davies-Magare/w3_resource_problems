#include "recursion.h"

/**
 * str_rev - reveses a string
 * @str: The string to be reversed
 *
 * Return: Nothing.
 */
void str_rev(char s[])
{
	int n;

	n = strlen_recursion(s);
	swap(s, 0, n - 1);
}

/**
 * swap - swaps the characters in of a string
 * @s: The string whose characters are to be swapped
 * @start: The starting point
 * @len: The length of the string
 *
 * Return: Nothing.
 */
void swap(char s[], int start, int len)
{
	char temp;

	temp = s[start];
	s[start] = s[len];
	s[len] = temp;
	if (start >= len)
		return;
	else
		swap(s, start + 1, len - 1);
}

/**
 * strlen_recursion - finds the length of a string
 * @s: A string
 *
 * Return: The length of the string.
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}
	
