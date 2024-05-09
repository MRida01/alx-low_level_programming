#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            if (i != left)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        size_t mid = (left + right) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
