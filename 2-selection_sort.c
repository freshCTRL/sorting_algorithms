#include "sort.h"
/**
 * selection_sort - Entry point
 * @array: argument to selection_sort
 * @size: argument to selection_sort
 *
 * Description - a sorting algorithm
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, min, temp;

if (size == 0)
return;
i = 0;
while (i < size - 1)
{
min = i;
j = i + 1;
while (j < size)
{
if (array[j] < array[min])
min = j;
j++;
}
if (min != i)
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
i++;
}
}
