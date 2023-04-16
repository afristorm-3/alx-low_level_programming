#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
    size_t half;
    size_t i;

    if (array == NULL || size == 0)
        return (-1);

    half = size / 2;

    printf("Searching in array");

    for (i = 0; i < size; i++)
        printf("%s %d", (i == 0) ? ":" : ",", array[i]);

    printf("\n");

    if (half && size % 2 == 0)
        half--;

    if (value == array[half])
        return ((int)half);

    if (value < array[half])
        return (recursive_search(array, half, value));

    return (recursive_search(array + half + 1, size - half - 1, value) + half + 1);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
    int low = 0, high = size - 1;
    int mid, i;

    while (low <= high)
    {
        printf("Searching in array:");
        for (i = low; i <= high; i++)
            printf("%s %d", (i == low) ? " " : ",", array[i]);
        printf("\n");

        mid = (low + high) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

/**
 * exponential_search - searches for a value in an array of
 * integers using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t index, next;
    int result;

    if (array == NULL)
        return (-1);

    if (array[0] == value)
        return (0);

    index = 1;

    while (index < size && array[index] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        index *= 2;
    }

    if (index >= size)
        index = size - 1;

    next = index + 1;
    printf("Value found between indexes [%lu] and [%lu]\n", index / 2, index);

    result = binary_search(array + index / 2, next - index / 2, value);

    if (result == -1)
        return (-1);

    return (result + index / 2);
}
