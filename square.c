#include "utils.h"
#include <stdio.h>

void getnum() {
  int num;
  char again;

  printf("Введите целое число, которое будет возведено в квадрат: ");
  scanf(" %d", &num);

  printf("\n%d в квадрате - %d\n", num, square(num));

  printf("Возвести в квадрат другое число? (Y)Да или (N)Нет: ");
  scanf(" %s", &again);
  if ((again == 'Y') || (again == 'y')) {
    getnum();
  } else
    return;
}

int main() {
  getnum();

  return 0;
}
