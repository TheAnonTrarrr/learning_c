#include <stdio.h>

int main() {
  int num = 2;
  char letter = 'b';

  switch (num) {
  case 1:
    printf("Номер 1\n");
    break;
  case 2:
    printf("Номер 2\n");
    break;
  case 3:
    printf("Номер 3\n");
    break;
  default:
    printf("Номер не распознан\n");
  }

  switch (letter) {
  case 'a':
  case 'b':
  case 'c':
    printf("Буква %c\n", letter);
    break;
  default:
    printf("Буква не распознана\n");
  }

  return 0;
}
