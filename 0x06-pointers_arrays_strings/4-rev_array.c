#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function to reverse array.
 * @a: array of integers.
 * @n: number of elements to swap.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, j, s;

	if (n % 2 != 0)
		s = n + 1;
	else
		s = n;
	for (i = 0; i < s / 2; i++)
	{
		j = a[i];
			a[i] = a[n - 1 - i];
				a[n - 1 - i] = j;
	}
}
