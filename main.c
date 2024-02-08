#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define ROWS 3
#define COLUMNS 4

int main() {
    DimArray arr = createDArray(ROWS, COLUMNS);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            setElement(&arr, i, j, i * COLUMNS + j);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%d ", getElement(&arr, i, j));
        }
        printf("\n");
    }

    freeDArray(&arr);

    return 0;
}