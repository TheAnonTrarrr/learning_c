#include <stdio.h>

int main() {
  if (5 > 1) {
    printf("Да, 5 больше 1\n");

    if (7 > 2) {
      printf("5 больше 1 и 7 больше 2\n");
    }
  }

  if (1 > 2) {
    printf("1-ое выражение правдиво\n");
  }

  else if (1 > 3) {
    printf("2-ое выражение правдиво\n");
  }

  else {
    printf("Оба выражения ложны\n");
  }

  return 0;
}
