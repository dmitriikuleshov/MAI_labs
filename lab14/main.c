#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
    int matrix_size;
    scanf("%d", &matrix_size);

    int matrix[matrix_size][matrix_size];
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("%d ", matrix[0][0]);
    if (matrix_size >= 2) {
        printf("%d ", matrix[0][1]);
        printf("%d ", matrix[1][0]);
        printf("%d ", matrix[1][1]);
    }

    int length = 3;
    if (matrix_size > 2) {
        while (length <= matrix_size && length <= matrix_size) {
            for (int col = 0; col < length; ++col) {
                printf("%d ", matrix[length - 1][col]);
            }
            for (int row = length - 2; row >= 0; --row) {
                printf("%d ", matrix[row][length - 1]);
            }
            if (length != matrix_size)           
                printf("%d ", matrix[0][length]);
            ++length;
            if (length > matrix_size && length > matrix_size)
                break;
            for (int row = 1; row < length; ++row) {
                printf("%d ", matrix[row][length - 1]);
            }
            for (int col = length - 1; col >= 0; --col) {
                printf("%d ", matrix[length - 1][col]);
            }
            ++length;
            if (length > matrix_size && length > matrix_size)
                break;
        }
    }
    return 0;
}