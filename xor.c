#include <stdio.h>

int main() {
  int x = 10, y = 5;
  printf("\nx = %d, y = %d", x, y);

  x = x ^ y;
  y = x ^ y;
  x = x ^ y;

  printf("\nx = %d, y = %d\n", x, y);

  return 0;
}
