#include <stdio.h>

int main() {
  int a, b;

  printf("Присвоенные: \n");
  printf("\tЗначение: a = %d \n", a = 8);
  printf("\tЗначение: b = %d \n", b = 4);
  printf("Прибавленное и присвоенное: \n");
  printf("\tЗначение: a += b | a = %d \n", a += b);
  printf("Уменьшенное и присвоенное: \n");
  printf("\tЗначение: a -= b | a = %d \n", a -= b);
  printf("Умноженное и присвоенное: \n");
  printf("\tЗначение: a *= b | a = %d \n", a *= b);
  printf("Поделённое и присвоенное: \n");
  printf("\tЗначение: a /= b | a = %d \n", a /= b);
  printf("Поделенное с остатком и присвоенное: \n");
  printf("\tЗначение: a %%= b | a = %d \n", a %= b);

  return 0;
}
