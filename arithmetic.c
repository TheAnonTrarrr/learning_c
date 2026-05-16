#include <stdio.h>

int main()
{
  int a = 4, b = 8, c = 1, d = 1;

  printf("Сложение: %d \n", a + b);
  printf("Вычитание: %d \n", b - a);
  printf("Умножение: %d \n", a * b);
  printf("Деление: %d \n", b / a);
  printf("Деление с остатком: %d \n", a % b);
  printf("Постфикс инкремент: %d \n", c++);
  printf("Постфикс декремент: %d \n", c--);
  printf("Постфикс сейчас: %d \n", c);
  printf("Префикс инкремент: %d \n", ++d);
  printf("Префикс декремент: %d \n", --d);
  printf("Префикс сейчас: %d \n", d);

  return 0;

}
