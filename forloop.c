#include <stdio.h>

int main() {
  int i, j;

  for (i = 1; i < 4; i++) {
    printf("Итерация внешнего цикла %d\n", i);

    for (j = 1; j < 4; j++) {
      printf("\tИтерация внутреннего цикла %d\n", j);
    }
  }

  return 0;
}
