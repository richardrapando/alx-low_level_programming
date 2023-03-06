#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: matrix elements
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{

        int z;
        int diag1 = 0, diag2 = 0;

        for (z = 0; z < size; z++)
        {
                diag1 += a[z];
                a += size;

        }

        a -= size;

        for (z = 0; z < size; z++)
        {

                diag2 += a[z];
                a -= size;

        }

        printf("%d, %d\n", diag1, diag2);

}
