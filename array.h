#pragma once

typedef struct {
    int rows;
    int columns;
    int* data;
} DimArray;

DimArray createDArray(int rows, int columns);
void setElement(DimArray* arr, int row, int column, int val);
int getElement(DimArray* arr, int row, int column);
void freeDArray(DimArray* arr);