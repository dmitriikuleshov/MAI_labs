#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void printMatrix(size_t size, int matrix[][size]) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// void transposeMatrix(size_t size, int matrix[][size], int matrix_transposed[][size]) {
//     for (size_t i = 0; i < size; ++i) {
//         for (size_t j = 0; j < size; ++j) {
//             matrix_transposed[j][i] = matrix[i][j];
//         }
//     }
// }

void differenceMatrix(size_t size, int matrix[][size], int matrix_difference[][size]) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = 0; j < size; ++j) {
            if (matrix[i][j] == matrix[j][i]) {
                matrix_difference[i][j] = 0;
            } else {
                matrix_difference[i][j] = matrix[i][j];
            }
        }
    }
}

void get_matrix(size_t size, int matrix[][size]) {
    printf("Введите элементы матрицы:\n");
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    size_t size;
    scanf("%zu", &size);

    int matrix[size][size];
    get_matrix(size, matrix);
    // int matrix_transposed[size][size];
    // transposeMatrix(size, matrix, matrix_transposed);

    int matrix_difference[size][size];
    differenceMatrix(size, matrix, matrix_difference);
    printMatrix(size, matrix_difference);
    return 0;
}