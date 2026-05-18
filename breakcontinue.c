#include <stdio.h>

int main() {
  int i, j;

  for (i = 1; i < 4; i++) {
    for (j = 1; j < 4; j++) {
      if (i == 1 && j == 1) {
        printf("Продолжение внутреннего цикла когда i = %d и j = %d\n", i, j);
        continue;
      }

      if (i == 2 && j == 1) {
        printf("Прерывание внутреннего цикла когда i = %d и j = %d\n", i, j);
        break;
      }

      printf("Работа i = %d | j = %d\n", i, j);
    }
  }

  return 0;
}
