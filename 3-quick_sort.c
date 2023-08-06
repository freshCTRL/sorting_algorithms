#include "sort.h"
/**
* lomuto - Entry point
* @array: argument to lomuto
* @size: argument to lomuto
* @high: argument to lomuto
* @low: argument to lomuto
*
* Description - a lomuto partitioning scheme use for quick_sort algorithm.
*/
void lomuto(int *array, int low, int high, size_t size);

void lomuto(int *array, int low, int high, size_t size)
{
int i, j, pivot, temp;

if (low >= high)
return;
i = low;
j = low;
pivot = array[high];
for (i = low; i <= high; i++)
{
if (array[i] <= pivot)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
if (array[i] != array[j])
print_array(array, size);
j++;
}
}
lomuto(array, low, j - 2, size);
lomuto(array, j, high, size);
}
/**
* quick_sort - Entry point
* @array: argument to quick_sort
* @size: argument to quick_sort
*
* Description - a sorting algorithm that use lomuto partitioning scheme
*/
void quick_sort(int *array, size_t size)
{
size_t high;
if (size == 0)
return;
high = size - 1;
lomuto(array, 0, high, size);
}
