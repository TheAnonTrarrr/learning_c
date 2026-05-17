#include <stdio.h>

int main() {
  int num;

  printf("Введите число: ");
  scanf(" %d", &num);

  (num % 2 != 0) ? printf("\n%d нечётное\n", num)
                 : printf("\n%d чётное\n", num);
  printf("Здесь %d %s\n", num,
         (num == 1 ? "яблоко" : (num < 5 ? "яблока" : "яблок")));

  return 0;
}
