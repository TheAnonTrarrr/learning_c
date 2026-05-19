#include <stdio.h>

void display(char str[]) { printf("%s\n", str); }

int square(int x) { return x * x; }

int cube(int y) { return (y * y) * y; }

int main() {
  int num = square(4);
  char msg[100] = "Строка, которая будет пропущена через функцию";

  display(msg);

  printf("4x4 = %d\n", num);
  printf("4x4x4 = %d\n", cube(4));

  return 0;
}
