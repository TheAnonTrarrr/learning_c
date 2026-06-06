#include <stdio.h>

int main() {
  char str[51];

  printf("Введите до 50 символов с пробелами:\n");
  fgets(str, sizeof(str), stdin);
  printf("fgets() читает: ");
  puts(str);

  printf("Введите до 50 символов с пробелами:\n");
  scanf("%s", str);
  printf("scanf() читает: %s\n", str);

  return 0;
}
