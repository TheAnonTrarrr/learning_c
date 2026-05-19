#include <stdio.h>

void action(int option);

void menu(void) {
  int option;
  printf("\n\tЧто вы хотели бы сделать?");
  printf("\n\t1. Возвести число в квадрат");
  printf("\n\t2. Умножить 2 числа");
  printf("\n\t3. Выйти\n");
  scanf(" %d", &option);
  action(option);
}

int main(void) {
  menu();
  return 0;
}
