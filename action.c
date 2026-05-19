#include <stdio.h>

void menu(void);

static int square(int a) { return (a * a); }
static int multiply(int a, int b) { return (a * b); }

void action(int option) {
  int n1, n2;

  if (option == 1) {
    printf("Введите число целое число, которое будет возведено в квадрат: ");
    scanf(" %d", &n1);
    printf("%d x %d = %d\n", n1, n1, square(n1));
    menu();
  }

  if (option == 2) {
    printf("Введите два целых числа, которые будут умножены (числа должны быть "
           "разделены пробелом): ");
    scanf(" %d %d", &n1, &n2);
    printf("%d x %d = %d\n", n1, n2, multiply(n1, n2));
    menu();
  } else {
    return;
  }
}
