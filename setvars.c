#include <stdio.h>

int main()
{
	char letter;
	int num1, num2;

	printf("Введите одну любую клавишу на клавиатуре:");
	scanf("%c", &letter);

	printf("Введите 2 целых числа, разделённых пробелом:");
	scanf("%d %d", &num1, &num2);

	printf("Введённые числа: %d и %d \n", num1, num2);
	printf("Введённый символ: %c \n", letter);
	printf("Хранится в: %p \n", &letter);
	return 0;
}
