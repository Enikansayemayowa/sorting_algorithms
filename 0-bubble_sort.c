#include "sort.h"
#include <stdbool.h>
void swap(int* b, int* c)
{
	int temp = *b;
	*b = *c;
	*c = temp;
}

void bubble_sort(int *array, size_t size)
{
	size_t i, j; 
	int swapValue;

	for (i = 0; i < size - 1; i++)
	{
		swapValue = false;
		for (j = i; j < size - i -1; j++)
		{
			if (array[j] > array[j + i])
			{
				swap(&array[j], &array[j + 1]);
				swapValue = true;
			}
		}
		if (swapValue == false)
		{
			break;
		}
	}
}
