#include "main.h"

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d", sum1, sum2);
}
