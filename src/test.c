#include "s21_matrix.h"

int main() {
  matrix_t matrix_A, matrix_temp, matrix_result;
  s21_create_matrix(2, 2, &matrix_A);
  s21_create_matrix(2, 2, &matrix_result);
  double k = 1;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matrix_A.matrix[i][j] = k++;
    }
  }
  matrix_result.matrix[0][0] = -2;
  matrix_result.matrix[0][1] = 1;
  matrix_result.matrix[1][0] = 1.5;
  matrix_result.matrix[1][1] = -0.5;
  int result = s21_inverse_matrix(&matrix_A, &matrix_temp);
  s21_print_matrix(&matrix_A);
  printf("\n");
  s21_print_matrix(&matrix_result);
  printf("\n");
  s21_print_matrix(&matrix_temp);
  return 0;
}