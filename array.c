#include <stdio.h>
#include <stdlib.h>
#include "array.h"

DimArray createDArray(int rows, int columns) {
    DimArray arr;
    arr.rows = rows;
    arr.columns = columns;
    arr.data = (int*)malloc(rows * columns * sizeof(int));

    if (arr.data == NULL) {
        printf("ERROR: MEMORY FAIL!!!\n");
        exit(1);
    }

    return arr;
}

void setElement(DimArray* arr, int row, int column, int val) {
    if (row >= 0 && row < arr->rows && column >= 0 && column < arr->columns) {
        *(arr->data + (row * arr->columns) + column) = val;
    }
    else {
        printf("ERROR: OUT OF RANGE!!!\n");
        exit(1);
    }
}

int getElement(DimArray* arr, int row, int column) {
    return *(arr->data + (row * arr->columns) + column);
}

void freeDArray(DimArray* arr) {
    free(arr->data);
}