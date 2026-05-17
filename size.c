#include <stdio.h>

int main() {
  int num = 1234567890;
  struct {
    int score;
    char grade;
  } result;

  printf("Размер целочисленного типа данных равна %zu байт\n", sizeof(int));
  printf("Размер целочисленного значения равно %zu байт\n", sizeof(num));
  printf("Размер целочисленного массива равен %zu байт\n", sizeof(int[3]));
  printf("Размер структуры равен %zu байт\n", sizeof(result));

  return 0;
}
