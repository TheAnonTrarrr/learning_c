#include <stdio.h>

int main() {
  int zero = 0, nil = 0, one = 1;
  char upr = 'A', lwr = 'a';

  printf("Равенство (0 == 0): %d \n", zero == nil);
  printf("Равенство (0 == 1): %d \n", zero == one);
  printf("Равенство (A == a): %d \n", upr == lwr);
  printf("Неравенство (A != a): %d \n", upr != lwr);
  printf("Больше (1 > 0): %d \n", one > nil);
  printf("Меньше (1 < 0): %d \n", one < nil);
  printf("Больше или равно (0 >= 0): %d \n", zero >= nil);
  printf("Меньше или равно (1 <= 0): %d \n", one <= nil);

  return 0;
}
