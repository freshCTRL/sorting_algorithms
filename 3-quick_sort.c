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
int start, end, pivot, temp;
int d, h;

d = 0;
start = low;
end = high;
pivot = high;

if (start >= end)
return;
h = 0;
while (start < end)
{
while (array[start] < array[pivot])
{
start++;
}
while (array[end] >= array[pivot])
{
end--;
}
if (start < end)
{
temp = array[start];
array[start] = array[end];
array[end] = temp;
print_array(array, size);
d = 1;
}
h++;
}

temp = array[pivot];
array[high] = array[start];
array[start] = temp;

if ((h == 1) && (low == 0))
print_array(array, size);
if (d == 1)
print_array(array, size);

lomuto(array, low, start - 1, size);
lomuto(array, start + 1, high, size);
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
