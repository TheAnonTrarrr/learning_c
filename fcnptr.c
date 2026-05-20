#include <stdio.h>

int bounce(int a) {
  printf("\nПолученное значение: %d\n", a);
  return ((3 * a) + 3);
}

int caller(int (*function)(int), int b) { return function(b); }

int main() {
  int (*fptr)(int) = bounce;
  int num;

  num = (*fptr)(10);
  printf("Полученное значение: %d\n", num);

  num = caller(fptr, 5);
  printf("Полученное значение: %d\n", num);

  return 0;
}
