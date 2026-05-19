#include <stdio.h>

void count_down_from(int num) {
  printf("%d\n", num);
  --num;

  if (num < 0)
    return;
  else
    count_down_from(num);
}

int main() {
  int start;

  printf("Введите !! ПОЛОЖИТЕЛЬНОЕ !! число с которого начать отсчёт: ");
  scanf(" %d", &start);

  count_down_from(start);

  printf("Пуск!\n");

  return 0;
}
