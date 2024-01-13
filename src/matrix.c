#include "matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
    int res = 1;
    result->matrix = (double **)calloc(rows, sizeof(double *));
    for (int i = 0; i < rows; i++) {
        result->matrix[i] = (double *)calloc(columns, sizeof(double));
    }
    return res;
}

void s21_remove_matrix(matrix_t *A) {
    int res = 1;
    if (A) {
        for (int i = 0; i < A->rows; i++) {
            free(A->matrix[i]);
        }
        free(A->matrix);
    }
    return res;
}
