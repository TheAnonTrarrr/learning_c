#include <stdio.h>

void twice(int *number) { *number = (*number * 2); }

void thrice(int *number) { *number = (*number * 3); }

int main() {
  int num = 5;
  int *ptr = &num;

  printf("ptr хранит адрес: %p\n", ptr);
  printf("*ptr разыменовывает значение %d\n\n", *ptr);

  printf("Значение num равно %d\n", num);

  twice(ptr);
  printf("Значение num теперь равно %d\n", num);

  thrice(ptr);
  printf("И теперь значение num равно %d\n", num);

  return 0;
}
