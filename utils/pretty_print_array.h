#include <stdio.h>

static void print_array(int *array, int size);

static void print_array(int *array, int size)
{
    int *p = array;
    int *end = array + size;
    char *pad = "{ ";

    while (p < end)
    {
        printf("%s%d", pad, *p++);
        pad = ", ";
    }
    printf(" }\n");
}