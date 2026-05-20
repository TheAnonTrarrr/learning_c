#include <stdio.h>

int main() {
  int i;
  int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int *ptr = nums;

  printf("\nПо адресу: %p - значение: %d\n", ptr, *ptr);

  ptr++;
  printf("По адресу: %p - значение: %d\n", ptr, *ptr);

  ptr++;
  printf("По адресу: %p - значение: %d\n", ptr, *ptr);

  ptr -= 2;
  printf("По адресу: %p - значение: %d\n\n", ptr, *ptr);

  for (i = 0; i < 10; i++) {
    printf("Элемент %d содержит значение: %d\n", i, *ptr);
    ptr++;
  }

  return 0;
}
