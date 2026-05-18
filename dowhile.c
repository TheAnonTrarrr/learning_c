#include <stdio.h>

int main() {
  int i, arr[3] = {10, 20, 30};

  i = 0;

  while (i < 3) {
    printf("Пока: arr[%d] = %d\n", i, arr[i]);
    i++;
  }

  i = 0;

  do {
    printf("\nДелай пока: arr[%d] = %d", i, arr[i]);
    i++;
  } while (i < 3);

  return 0;
}
