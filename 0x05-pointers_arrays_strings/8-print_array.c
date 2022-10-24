#include "main.h"
#include <stdio.h>

/**
* print_array - prints the n elements of an array
*@a: array to print
*@n: number of elements in the aray
*Return: Nothing
*/
void print_array(int *a, int n)
{
	int n;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
