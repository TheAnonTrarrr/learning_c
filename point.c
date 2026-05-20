#include <stdio.h>

int main() {
  int num = 8;
  int *ptr = &num;

  printf("Обыкновенное значение содержит: %d\n", num);
  printf("Значение указателя содержит: %p\n", ptr);
  printf("Указатель указывает на значение: %d\n\n", *ptr);

  *ptr = 12;

  printf("Обыкновенное значение содержит: %d\n", num);
  printf("Значение указателя содержит: %p\n", ptr);
  printf("Указатель указывает на значение: %d\n\n", *ptr);

  return 0;
}
