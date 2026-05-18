#include <stdio.h>

void first() { printf("Привет из 1-ой функции!\n"); }

int square5() {
  int square = 5 * 5;
  return square;
}

int cube5() {
  int cube = (5 * 5) * 5;
  return cube;
}

int main() {
  first();

  int num = square5();
  printf("5x5 = %d\n", num);
  printf("5x5x5 = %d\n", cube5());

  return 0;
}
